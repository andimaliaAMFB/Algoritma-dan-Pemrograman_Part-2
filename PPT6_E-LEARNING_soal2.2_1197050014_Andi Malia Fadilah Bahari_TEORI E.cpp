/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 2.2*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Masukan banyak Baris: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(j%2==0)
				printf("X");
			else
				printf("O");
		}
		printf("\n");
	}
}
