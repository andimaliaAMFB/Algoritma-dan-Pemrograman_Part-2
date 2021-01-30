/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 1.2,1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Masukan panjang Baris: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=(n-i);j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
