#include<stdio.h>
#include<conio.h>
#include<windows.h>

void title()
{
	system("cls");
	printf("                      Program Menjumlahkan 2 Matriks\n");
	printf("==========================================================================\n\n");
}

main()
{
	char jwb;
	do
	{
		int n,m,a['n']['m'],b['n']['m'],c['n']['m'];;
		title();
		printf("Masukan banyak baris: "); scanf("%d",&n);
		printf("Masukan banyak kolom: "); scanf("%d",&m);
		
		//input//
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("Masukan Nilai Matriks pertama untuk [%d][%d]: ",i,j);scanf("%d",&a[i][j]);
			}
		}
		printf("\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("Masukan Nilai Matriks kedua untuk [%d][%d]  : ",i,j);scanf("%d",&b[i][j]);
			}
		}
		
		title();
		//output//
		printf("Penjumlahan antara matriks A dengan matriks B adalah \n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	return 0;
}
