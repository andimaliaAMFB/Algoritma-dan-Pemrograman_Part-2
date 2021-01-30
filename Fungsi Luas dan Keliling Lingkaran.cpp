#include<stdio.h>
#include<windows.h>
#include<conio.h>

const float phi=3.14;

float luas(float r);
float kel(float r);
void strip_title();

main()
{
	float r,l,k;
	char jwb;
	do
	{
		int pilih;
		strip_title();
		printf("1.Luas Lingkaran\n2.Keliling Lingkaran\n\n");
		printf("Masukan pilihan Anda: ");scanf("%d",&pilih);
		printf("Masukan ukuran Jari-jari: ");scanf("%f",&r);
		
		system("cls");
		_sleep(150);
		strip_title();
		switch(pilih)
		{
			case 1:
				printf("Luas Lingkaran dengan jari-jari %.2f adalah %.2f\n",r,luas(r));
				break;
			case 2:
				printf("Keliling Lingkaran dengan jari-jari %.2f adalah %.2f\n",r,kel(r));
				break;
			default:
				printf("ERROR\n");
		}
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}

float luas(float r)
{
	float luas=phi*r*r;
	return luas;
}
float kel(float r)
{
	float kel=2*phi*r;
	return kel;
}
void strip_title()
{
	printf("  Program Menghitung Luas dan Keliling Lingkaran\n");
	for(int i=0;i<5;i++)
		printf("==========");
	printf("\n\n");
}
