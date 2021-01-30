#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

void title()
{
	system("cls");
	printf("Program Konversi Decimal, Biner, Oktal, Heksadesimal, Sexagesimal\n");
	printf("=================================================================\n\n");
}

float bil_input=0;

int biner_decimal(int bil_input);
int oktal_decimal(int bil_input);
int heksa_decimal();
float sexa_decimal(float bil_input);
int biner(int decimal);
int oktal(int decimal);
int heksadesimal(int decimal);
int sexagesimal(float decimal);
main()
{
	char jwb;
	do
	{
		title();
		int plh;
		printf("Bilangan yang akan dimasukan berupa:\n");
		printf("1. Decimal\t4. Heksadesimal\n");
		printf("2. Biner  \t5. Sexagesimal\n");
		printf("3. Oktal\n");
		scanf("%d",&plh);
		
		title();
		switch(plh)
		{
			case 1:
				printf("Masukan Bilangan Desimal     : ");scanf("%f",&bil_input);
				biner(bil_input);
				oktal(bil_input);
				heksadesimal(bil_input);
				sexagesimal(bil_input);
				break;
			case 2:
				printf("Masukan Bilangan Biner       : ");scanf("%f",&bil_input);
				biner_decimal(bil_input);
				break;
			case 3:
				printf("Masukan Bilangan Oktal       : ");scanf("%f",&bil_input);
				oktal_decimal(bil_input);
				break;
			case 4:
				heksa_decimal();
				break;
			case 5:
				sexa_decimal(bil_input);
				break;
		}
		printf("\nUlangi Program? [y/n] ");
		jwb=getch();
	}while(jwb=='y'||jwb=='Y');
}

int biner_decimal(int bil_input)
{
	int dec=0;
	for(int i=25;i>=0;i--)
	{
		if(bil_input>=pow(10,i))
		{
			bil_input=bil_input-(pow(10,i));
			dec=dec+(pow(2,i));
		}
	}
	printf("Decimal     : %d\n",dec);
	oktal(dec);
	heksadesimal(dec);
	sexagesimal(dec);
}

int oktal_decimal(int bil_input)
{
	int dec=0;
	for(int i=10;i>=0;i--)
	{
		if(bil_input>=(pow(10,i)))
		{
			do
			{
				bil_input=bil_input-(pow(10,i));
				dec=dec+(pow(8,i));
			}while(bil_input>=(pow(10,i)));
		}
	}
	printf("Decimal     : %d\n",dec);
	biner(dec);
	heksadesimal(dec);
	sexagesimal(dec);
}

int heksa_decimal()
{
	int d=0,p,n_h;
	char h[7];
	printf("Masukan Bilangan Heksadesimal:");scanf("%s",&h);
	n_h=strlen(h);
	for(int i=0;i<n_h;i++)
	{
		p=pow(16,n_h-(i+1));
		if(h[i]>='0'&&h[i]<='9')
		{
			d+=((h[i]-48)*p);
		}
		else if(h[i]>='A'&&h[i]<='F')
		{
			d+=((h[i]-55)*p);
		}
	}
	printf("\nDecimal     : %d\n",d);
	biner(d);
	oktal(d);
	sexagesimal(d);
}

float sexa_decimal(float bil_input)
{
	float dec=0;
	int sexad,sexam;
	float sexadtk;
	printf("Masukan Bilangan Sexagesimal :\n");
	printf("Derajat: ");scanf("%d",&sexad);
	printf("Menit  : ");scanf("%d",&sexam);
	printf("Detik  : ");scanf("%f",&sexadtk);
	dec=(sexad)+(sexam/60)+(sexadtk/60);
	title();
	printf("Sexagesimal : %d%c%d%c%.3f%c\n",sexad,248,sexam,39,sexadtk,34);
	printf("Decimal     : %f\n",dec);
	biner(dec);
	oktal(dec);
	heksadesimal(dec);
}

int biner(int decimal)
{
	int b;
	printf("Biner       : ");
	for(int i=25;i>=0;i--)
	{
		b=pow(2,i);
		if(decimal>=b)
		{
			decimal-=b;
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
	return 0;
}

int oktal(int decimal)
{
	int o,p,d=decimal;
	printf("Oktal       : ");
	for(int i=10;i>=0;i--)
	{
		o=0;
		p=pow(8,i);
		while(d>=p)
		{
			d-=p;
			o+=1;
		}
		printf("%d",o);
	}
	printf("\n");
	return 0;	
}

int heksadesimal(int decimal)
{
	int h,p;
	printf("Heksadesimal: ");
	for(int i=7;i>=0;i--)
	{
		h=0;
		p=pow(16,i);
		while(decimal>=p)
		{
			decimal-=p;
			h++;
		}
		switch(h)
		{
			case 11:
				printf("A");
				break;
			case 12:
				printf("B");
				break;
			case 13:
				printf("C");
				break;
			case 14:
				printf("D");
				break;
			case 15:
				printf("E");
				break;
			case 16:
				printf("F");
				break;
			default:printf("%d",h);
		}
	}
	printf("\n");
	return 0;
}

int sexagesimal(float decimal)
{
	printf("Sexagesimal : ");
	float sexad,sexam,dtk,mnt;
	int de,sexame;
	de=decimal;
	sexad=decimal-de;
	sexam=sexad*60;
	sexame=sexam;
	mnt=sexam-sexame;
	dtk=mnt*60;
	printf("%d%c%.0f%c%.3f%c\n",de,248,sexam,39,dtk,34);
	return 0;
}
