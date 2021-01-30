/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 3*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,k=1;
	printf("Masukan banyak Baris: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}
