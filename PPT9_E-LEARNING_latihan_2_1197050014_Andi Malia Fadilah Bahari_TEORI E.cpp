#include<stdio.h>
#include<conio.h>
#include<windows.h>

int n=0;

void title()
{
	system("cls");
	printf("                  Program Untuk Menghitung Jumlah dan Rata-rata,\n");
	printf("                       Mencari Nilai Maksimum dan Minimum,\n");
	printf("                      Dari Banyak Bilangan Yang Diinput, dan\n");
	printf("                        Frekuensi Banyaknya Suatu Bilangan\n");
	printf("=========================================================================================\n\n");
}

int tot(int n,int*bil);
float rat(int n,int*bil);
int max(int n,int*bil);
int min(int n,int*bil);
int frek(int n,int*bil,int cari);

main()
{
	char jwb;
	do
	{
		title();
		int x,a['x'],cari;
		printf("Masukan Banyak Bilangan Yanga Akan Dimasukan: ");scanf("%d",&x);
		
		for(int i=0;i<x;i++)
		{
			if(i==0)
				printf("Masukan Bilangan pertama: ");
			else
				printf("Masukan Bilangan ke-%d   : ",(i+1));
			scanf("%d",&a[i]);
		}
		printf("Bilangan Apa Yang Anda Cari? ");scanf("%d",&cari);
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
		printf("Bilangan Terbesar: %d\n",max(x,a));
		printf("Bilangan Terkecil: %d\n",min(x,a));
		printf("Frekuensi Bilangan %d adalah %d\n\n",cari,frek(x,a,cari));
		
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
	int max=bil[0];
	for(int i=0;i<n;i++)
	{
		if(bil[i]>max)
			max=bil[i];
	}
	return max;
}

int min(int n,int*bil)
{
	int min=bil[0];
	for(int i=0;i<n;i++)
	{
		if(bil[i]<min)
			min=bil[i];
	}
	return min;
}

int frek(int n,int*bil,int cari)
{
	int byk_cari=0;
	for(int i=0;i<n;i++)
	{
		if(bil[i]==cari)
		{
			byk_cari++;
		}
	}
	if(byk_cari==0)
		return 0;
	else
		return byk_cari;
}
