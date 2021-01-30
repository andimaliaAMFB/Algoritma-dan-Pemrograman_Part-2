#include<stdio.h>
#include<conio.h>
#include<windows.h>

int n=0;

void title()
{
	system("cls");
	printf("                  Program Untuk Menghitung Jumlah dan Rata-rata,\n");
	printf("                       Mencari Nilai Maksimum dan Minimum,\n");
	printf("                    Frekuensi Banyaknya Suatu Bilangan, dan\n");
	printf("                       Mencari dan Menghapus Suatu Data\n");
	printf("                      Dari Banyak Bilangan Yang Diinput\n");
	printf("=========================================================================================\n\n");
}

void cetak_deret(int n,int*bil);

int tot(int n,int*bil);
float rat(int n,int*bil);
int max(int n,int*bil);
int min(int n,int*bil);
int frek(int n,int*bil,int cari);
int hapus(int n,int*bil);

main()
{
	int pilih;
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
		title();
		cetak_deret(x,a);
		
		printf("Program Yang Anda Inginkan?\n");
		printf("1.Menghitung Jumlah Data\t5.Mencari Data\n");
		printf("2.Menghitung Rata-rata Data\t6.Menghitung Frekuensi Suatu Data\n");
		printf("3.Mencari Bilangan Terbesar\t7.Menghapus Data\n");
		printf("4.Mencari Bilangan Terkecil\t0.Keluar\n");
		printf("Pilihan Anda: ");scanf("%d",&pilih);
		printf("\n");
		switch(pilih)
		{
			case 1:
				printf("Jumlah Perhitungan dari %d bilangan yang dimasukan adalah %d\n",x,tot(x,a));
				break;
			case 2:
				printf("Rata-rata dari %d bilangan yang dimasukan adalah %.2f\n",x,rat(x,a));
				break;
			case 3:
				printf("Bilangan Terbesar: %d\n",max(x,a));
				break;
			case 4:
				printf("Bilangan Terkecil: %d\n",min(x,a));
				break;
			case 5:
				printf("Bilangan Apa Yang Anda Cari? ");scanf("%d",&cari);
				break;
			case 6:
				printf("Frekuensi Bilangan %d adalah %d\n",cari,frek(x,a,cari));
				if(frek(x,a,cari)!=0)
					printf("Bilangan %d ADA Dalam Deret\n",cari);
				else
					printf("Bilangan %d TIDAK ADA Dalam Deret\n",cari);
				break;
			case 7:
				hapus(x,a);
				x--;
				printf("Deret Bilangannya: ");
				cetak_deret(x,a);
				break;
		}
		
		printf("\nUlangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	end:
		printf("\n\n");
		printf("Terimakasih Telah Menggunakan Jasa Kami");
	return 0;
}

void cetak_deret(int n,int*bil)
{
	for(int i=0;i<n;i++)
		{
			printf("%d",bil[i]);
			if(i<(n-1))
				printf(", ");
			else
				printf("\n");
		}
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

int hapus(int n,int*bil)
{
	int ke_x,tmp=0;
	printf("Bilangan Keberapa Yang Ingin Anda Hapus?"); scanf("%d",&ke_x);
	for(int i=0;i<n;i++)
	{
		if(i>(ke_x-1))
		{
			bil[i-1]=bil[i];
		}
	}
	return bil['n'];
}
