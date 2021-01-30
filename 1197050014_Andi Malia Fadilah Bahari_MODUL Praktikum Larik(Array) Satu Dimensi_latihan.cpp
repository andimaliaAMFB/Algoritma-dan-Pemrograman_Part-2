#include<stdio.h>
#include<conio.h>
#include<windows.h>

int n;
int jum(int n, int* bil);
float rata(int n, int* bil);

int main()
{
	char jwb;
	do
	{
		system("cls");
		int a['n'];
		printf("  Program Menjumlahkan Data Yang Dimasukan, Dan Menampilkan Rata-ratanya\n");
		printf("==========================================================================\n\n");
		
		printf("Masukan Banyak bilangan yang akan dimasukan: ");scanf("%d",&n);
		printf("\n");
		for(int i=0;i<n;i++)
		{
			printf("Masukan data ke-%d: ",(i+1)); scanf("%d",&a[i]);
		}
		
		printf("\n");
		printf("Jumlah dari %d bilangan yang dimasukan adalah %d, dan\n",n,jum(n,a));
		printf("Rata-rata dari %d bilangan yang dimasukan adalah %.2f\n\n",n,rata(n,a));
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	return 0;
}

int jum(int n, int* bil)
{
	int jum=0;
	for(int i=0;i<n;i++)
	{
		jum=jum+bil[i];
	}
	return jum;
}

float rata(int n, int* bil)
{
	int jum=0;
	float j,rata=0;
	for(int i=0;i<n;i++)
	{
		jum=jum+bil[i];
		j=jum;
	}
	rata=j/n;
	return rata;
}
