#include<stdio.h>
#include<conio.h>
#include<windows.h>

int n=0;

void title()
{
	system("cls");
	printf("  Program Untuk Menghitung Jumlah dan Rata-rata, dan Mencari Nilai Maksimum dan Minimum\n");
	printf("         Mencari Nilai Maksimum dan Minimum, serta Nilai Masukum dan Minimum Keduanya\n");
	printf("                         Dari Banyak Bilangan Yang Diinput\n");
	printf("=========================================================================================\n\n");
}

int tot(int n,int*bil);
float rat(int n,int*bil);
int max(int n,int*bil);
int min(int n,int*bil);

main()
{
	char jwb;
	do
	{
		title();
		int x,a['x'];
		printf("Masukan Banyak Bilangan Yanga Akan Dimasukan: ");scanf("%d",&x);
		
		for(int i=0;i<x;i++)
		{
			if(i==0)
				printf("Masukan Bilangan pertama: ");
			else
				printf("Masukan Bilangan ke-%d   : ",(i+1));
			scanf("%d",&a[i]);
		}
		
		title();
		printf("Deret Bilangannya: ");
		for(int i=0;i<x;i++)
		{
			printf("%d",a[i]);
			if(i<(x-1))
				printf(", ");
			else
				printf("\n");
		}
		printf("Jumlah Perhitungan dari %d bilangan yang dimasukan adalah %d\n",x,tot(x,a));
		printf("Rata-rata dari %d bilangan yang dimasukan adalah %.2f\n",x,rat(x,a));
		max(x,a);
		min(x,a);
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	return 0;
}

int tot(int n,int*bil)
{
	int jum=0;
	for(int i=0;i<n;i++)
	{
		jum=jum+bil[i];
	}
	return jum;
}

float rat(int n,int*bil)
{
	float jum=0,rata=0;
	for(int i=0;i<n;i++)
	{
		jum=jum+bil[i];
	}
	rata=jum/n;
	return rata;
}

int max(int n,int*bil)
{
	int max;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(bil[i]<bil[j])
			{
				max=bil[j];
				bil[j]=bil[i];
				bil[i]=max;
			}
		}
	}
	printf("Bilangan Terbesar      : %d\n",bil[0]);
	printf("Bilangan Terbesar kedua: %d\n\n",bil[1]);
}

int min(int n,int*bil)
{
	int min;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(bil[i]>bil[j])
			{
				min=bil[j];
				bil[j]=bil[i];
				bil[i]=min;
			}
		}
	}
	printf("Bilangan Terkecil      : %d\n",bil[0]);
	printf("Bilangan Terkecil kedua: %d\n\n",bil[1]);
}
