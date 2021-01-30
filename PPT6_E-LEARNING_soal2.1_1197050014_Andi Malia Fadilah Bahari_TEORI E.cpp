/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 2.1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Masukan banyak Baris: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n*5;i++)
	{
		printf("%d ",i);
		if(i%5==0)
			printf("\n");
	}
}
