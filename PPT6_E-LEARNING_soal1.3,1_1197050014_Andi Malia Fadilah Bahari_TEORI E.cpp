/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 1.3,1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Masukan panjang Baris: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
