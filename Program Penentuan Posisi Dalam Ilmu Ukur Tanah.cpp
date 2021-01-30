#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

void title()
{
	system("cls");
	printf("                 Program Penentuan Posisi\n");
	printf("                  Dalam Ilmu Ukur Tanah\n");
	printf("============================================================\n\n");
}

void bearing_contoh()
{
	printf("Contoh Bearing    : U35T\n\n");
}
void azimut_contoh()
{
	printf("Azimut Menggunakan Bilangan Decimal atau Sexagesimal\n");
	printf("Contoh Desimal    : 4.32453\n");
	printf("Contoh Sexagesimal: 35%c54%c59.304%c\n\n",248,39,34);
}


int bearing();
int azimut();
int input_decimal();
int input_sexagesimal();
int sexagesimal_cetak(float azimut,char Y,char X,float azimut_utara,float azimut_selatan);

main()
{
	char jwb;
	do
	{
		int pilih;
		title();
		bearing_contoh();
		azimut_contoh();
		printf("Jenis yang akan Anda Masukan:\n");
		printf("1. Bearing\n2. Azimut\nPilihan Anda: ");scanf("%d",&pilih);
		switch(pilih)
		{
			case 1:
				bearing();
				break;
			case 2:
				azimut();
		}
		printf("\nUlangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	printf("\nTerimakasih Telah Menggunakan Jasa Kami\n");
	printf("_________________________________________");
	return 0;
}

int bearing()
{
	title();
	bearing_contoh();
	int n_bear;
	char bear[5];
	//input//
	printf("Masukan Nilai Bearing: ");scanf("%s",&bear);
	n_bear=strlen(bear);
	//proses//
		//azimut//
		float az=0,az_u=0,az_s=0;
		char us,bt;
		for(int i=0;i<n_bear;i++)
		{
			if(bear[i]>='0'&&bear[i]<='9')
			{
				az=az+((bear[i]-48)*pow(10,n_bear-2-i));
			}
		}
		az_u=az;
		az_s=180-az_u;
		us=85;
		bt=84;
			//85=U,83=S
			//84=T,66=B
		if(az>90)
		{
			az_s=180+az;
			us=83;
			if(az>180)
			{
				az_s=az-180;
				bt=66;
				if(az>270&&az<360)
				{
					az_s=180-(360-az);
					us=85;
				}
			}
		}
		if(az_u>=az_s)
		{
			az=az_s;
			if(az>90)
			{
				az=180-az;
			}
		}
		else
		{
			az=az_u;
			if(az>90)
			{
				az=180-az;
			}
		}
	printf("\nKoreksi Penulisan...\n");
	_sleep(500);
	printf("Bearing: %c%0.f%c\n",us,az,bt);
	printf("Lanjutkan...\n");
	getche();
	sexagesimal_cetak(az,us,bt,az_u,az_s);
}

int azimut()
{
	int pilih;
	title();
	azimut_contoh();
	printf("Bilangan yang akan anda masukan:\n");
	printf("1.Decimal\n2.Sexagesimal\nPilihan Anda: ");scanf("%d",&pilih);
	switch(pilih)
	{
		case 1:
			input_decimal();
			break;
		case 2:
			input_sexagesimal();
			break;
		default:
			printf("Ulangi pilihan Anda");
			getche();	
	}
	
}

int input_decimal()
{
	title();
	azimut_contoh();
	int pilih;
	float dec_u=0,dec_s=0,dec,tmp;
	char us,bt;
	
	printf("Masukan Nilai Azimut [1.Utara/2.Selatan]? ");scanf("%d",&pilih);
	if(pilih==2)
	{
		printf("Masukan Nilai Azimut Selatan: ");scanf("%f",&dec_u);
	}
	else
	{
		printf("Masukan Nilai Azimut Utara  : ");scanf("%f",&dec_u);
	}
	
	dec=dec_u;
	dec_s=180+dec_u;
	us='U';
	bt='T';
	//bearing//
	if(dec_u>90)
	{
		dec_s=180+dec_u;
		us='S';
		if(dec_u>180)
		{
			dec_s=dec_u-180;
			bt='B';
			if(dec_u>270&&dec_u<=360)
			{
				us='U';
			}
		}
	}
	if(pilih==2)//tukar tempat//
	{
		tmp=dec_u;
		dec_u=dec_s;
		dec_s=tmp;
	}
	
	if(dec_u>=dec_s)
	{
		dec=dec_s;
		if(dec>90)
		{
			dec=180-dec;
		}
	}
	else if(dec_s>=dec_u)
	{
		dec=dec_u;
		if(dec>90)
		{
			dec=180-dec;
		}
	}
	printf("\nAzimut Utara  : %f\n",dec_u);
	printf("Azimut Selatan: %f\n",dec_s);
	printf("Lanjutkan...\n");
	getche();
	sexagesimal_cetak(dec,us,bt,dec_u,dec_s);
}

int input_sexagesimal()
{
	title();
	azimut_contoh();
	int pilih,sexde,sexme;
	float dec_u,dec_s,dec,sexdtk,tmp;
	char us,bt;
	
	printf("Masukan Nilai Azimut [1.Utara/2.Selatan]? ");scanf("%d",&pilih);
	if(pilih==2)
	{
		printf("Masukan Nilai Azimut Selatan:\n");
	}
	else
		printf("Masukan Nilai Azimut Utara  :\n");
	
	printf("Derajat: ");scanf("%d",&sexde);
	printf("Menit  : ");scanf("%d",&sexme);
	printf("Detik  : ");scanf("%f",&sexdtk);
	dec_u=sexde+((sexme+(sexdtk/60))/60);
	
	//bearing//
	dec=dec_u;
	dec_s=180+dec;
	us='U';
	bt='T';
	if(dec>90)
	{
		us='S';
		if(dec>180)
		{
			dec_s=dec-180;
			bt='B';
			if(dec>270&&dec<=360)
			{
				us='T';
			}
		}
	}
	if(pilih==2)//tukar tempat//
	{
		tmp=dec_u;
		dec_u=dec_s;
		dec_s=tmp;
	}
	
	if(dec_u>=dec_s)
	{
		dec=dec_s;
		if(dec>90)
		{
			dec=180-dec;
		}
	}
	else if(dec_s>=dec_u)
	{
		dec=dec_u;
		if(dec>90)
		{
			dec=180-dec;
		}
	}
	printf("Azimut Utara  : %f\n",dec_u);
	printf("Azimut Selatan: %f\n",dec_s);
	printf("Lanjutkan...\n");
	getche();
	sexagesimal_cetak(dec,us,bt,dec_u,dec_s);
}

int sexagesimal_cetak(float azimut,char Y,char X,float azimut_utara,float azimut_selatan)
{
	title();
	int sexaz,sexaz_u,sexaz_s,sexamnt,sexadtk;
	float sexam,sexad;
	printf("___________________________________________________________________________________________________\n");
	printf("||________Azimut (U)________||________Azimut (S)________||________________Azimut_________________||\n");
	printf("||  Decimal  || Sexagesimal ||  Decimal  || Sexagesimal ||  Decimal  || Sexagesimal ||  Bearing  ||\n");
	//sexagesimal//
		//azimutU//
			sexaz_u=azimut_utara;//derajat//
			if(sexaz_u>azimut_utara+1)
				sexaz_u-=1;
			sexam=(azimut_utara-sexaz_u)*60;//menit//
			sexamnt=sexam;
			if(sexamnt>sexam+1)
				sexamnt-=1;
			sexad=(sexam-sexamnt)*60;//detik//
			printf("||%10.3f ||%3d%c%2d%c%4.1f%c ||",azimut_utara,sexaz_u,248,sexamnt,39,sexad,34);
		//azimutS//
			sexaz_s=azimut_selatan;//derajat//
			if(sexaz>azimut_selatan+1)
				sexaz-=1;
			sexam=(azimut_selatan-sexaz_s)*60;//menit//
			sexamnt=sexam;
			if(sexamnt>sexam+1)
				sexamnt-=1;
			sexad=(sexam-sexamnt)*60;//detik//
			printf("%10.3f ||%3d%c%2d%c%4.1f%c ||",azimut_selatan,sexaz_s,248,sexamnt,39,sexad,34);
		//azimut_bearing//
			sexaz=azimut;//derajat//
			if(sexaz>azimut)
				sexaz-=1;
			sexam=(azimut-sexaz)*60;//menit//
			sexamnt=sexam;
			if(sexamnt>sexam)
				sexamnt-=1;
			sexad=(sexam-sexamnt)*60;//detik//
			printf("%10.3f ||%3d%c%2d%c%4.1f%c ||   %c%3d%c   ||\n",azimut,sexaz,248,sexamnt,39,sexad,34,Y,sexaz,X);
			printf("___________________________________________________________________________________________________\n");
			getche();
}
