/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 1.3,2*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j=1;
	printf("Masukan panjang Baris: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		while (j<=(5*i))
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
	}
}
