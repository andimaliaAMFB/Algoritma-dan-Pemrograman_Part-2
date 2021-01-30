#include<stdio.h>
#include<conio.h>
#include<windows.h>
void ls4 ();
void ls3 ();
void ling ();
void trap ();

const float phi=3.14;

main()
{
	int pilih;
	char jwb;
	awal:
		printf("Program untuk menghitung luas\n");
		printf("1.Luas Segi Empat\n2.Luas Segi Tiga\n3.Luas Lingkaran\n4.Luas Trapesium\n0. EXIT\n");
		printf("Pilihan anda: "); scanf("%d",&pilih);
		printf("\n\n");
		switch(pilih)
		{
			case 1:
				ls4();
				break;
			case 2:
				ls3();
				break;
			case 3:
				ling();
				break;
			case 4:
				trap();
				break;
		}
		printf("Ulangi? [y/n]");
		jwb=getche();
		printf("\n\n");
		if(jwb=='y'||jwb=='Y')
		{
			system("cls");
			_sleep(150);
			goto awal;
		}
		else if(jwb=='n'||jwb=='N')
			printf("Terimakasih telah menggunakan jasa kami");
}

void ls4 ()
{
	float p,l,L;
	printf("Masukan Panjang segi empat: "); scanf("%f",&p); 
	printf("Masukan Lebar segi empat: "); scanf("%f",&l);
	L=p*l;
	printf("Luas Segi Empat adalah %f\n",L);
}
void ls3 ()
{
	float a,t,L;
	printf("Masukan Panjang Alas segi tiga: "); scanf("%f",&a); 
	printf("Masukan Tinggi segi tiga: "); scanf("%f",&t);
	L=a*t/2;
	printf("Luas Segi Tiga adalah %f\n",L);

}
void ling ()
{
	float r,L;
	printf("Masukan Panjang Jari-jari Lingkaran: "); scanf("%f",&r);
	L= phi*r*r;
	printf("Luas Lingkaran adalah adalah %f\n",L);
}
void trap ()
{
	float a,t,L;
	printf("Masukan Panjang Alas trapesium: "); scanf("%f",&a); 
	printf("Masukan Tinggi trapesium      : "); scanf("%f",&t);
	L=a*t;
	printf("Luas Segi Tiga adalah %f\n",L);
}
		
