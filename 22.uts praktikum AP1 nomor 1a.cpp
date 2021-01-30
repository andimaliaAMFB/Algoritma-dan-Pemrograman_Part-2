/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*uts praktikum AP1 nomor 1a*/
#include<stdio.h>
#include<iomanip>
main()
{
	int n,i=0,j=0;
	printf("Masukan jumlah bilangan: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
