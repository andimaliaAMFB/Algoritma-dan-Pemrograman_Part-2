#include<stdio.h>
#include<conio.h>
#include<windows.h>

int n=0;
int x=0,y=0;
int m1[10][10],m2[10][10],h[10][10];

void title()
{
	system("cls");
	printf("Program Program Penjumlahan dan Pengurangan Matriks\n");
	printf("===================================================\n\n");
}

int tambah(int x,int y,int m1[10][10],int m2[10][10]);
int kurang(int x,int y,int m1[10][10],int m2[10][10]);

main()
{
	int pilih;
	char jwb;
	do
	{
		title();
		printf("Masukan Banyak Baris: ");scanf("%d",&x);
		printf("Masukan Banyak Kolom: ");scanf("%d",&y);
		
		for(int i=0;i<x;i++)//isi matriks 1//
		{
			for(int j=0;j<y;j++)
			{
				printf("Masukan Data Untuk Matriks Pertama Pada [%d][%d]: ",i,j);
				scanf("%d",&m1[i][j]);
			}
		}
		printf("\n");
		for(int i=0;i<x;i++)//isi matriks 2//
		{
			for(int j=0;j<y;j++)
			{
				printf("Masukan Data Untuk Matriks Kedua Pada [%d][%d]  : ",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		
		title();
		//cetak matriks 1&2//
		printf("Matriks 1:\n");
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				printf("%d ",m1[i][j]);
			}
			printf("\n");
		}
		printf("Matriks 2:\n");
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				printf("%d ",m2[i][j]);
			}
			printf("\n");
		}
		//cetak matriks 1&2//
		
		printf("Program Apa Yang Akan Anda Lakukan?\n");
		printf("1. Penjumlahan Matriks\n2. Pengurangan Matriks\n");
		printf("Pilihan Anda: ");scanf("%d",&pilih);
		
		printf("Hasil Dari ");
		switch(pilih)
		{
			case 1:
				printf("Penjumlahan Matriks 1 dengan Matriks 2 Adalah\n");
				tambah(x,y,m1,m2);
				break;
			case 2:
				printf("Pengurangan Matriks 1 dengan Matriks 2 Adalah\n");
				kurang(x,y,m1,m2);
				break;
			default:
				goto end;
		}
		
		end:		
			printf("\nUlangi Program? [y/n] ");
			jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	printf("\n\n");
	printf("Terimakasih Telah Menggunakan Jasa Kami");
	return 0;
}

int tambah(int x,int y,int m1[10][10],int m2[10][10])
{
	int c['x']['y'];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			c[i][j]=m1[i][j]+m2[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}

int kurang(int x,int y,int m1[10][10],int m2[10][10])
{
	int c['x']['y'];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			c[i][j]=m1[i][j]-m2[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return c['x']['y'];
}
