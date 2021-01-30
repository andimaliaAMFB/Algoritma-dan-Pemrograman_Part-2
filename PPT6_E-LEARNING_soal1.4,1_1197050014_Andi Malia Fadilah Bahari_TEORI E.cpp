/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 1.4,1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,j;
	printf("Masukan Panjang Baris: ");
	scanf("%d",&n);
	
	do
	{
		j=0;
		do
		{
			printf("%d ",(5*j+i));
			j++;
		}while(j<3);
		printf("\n");
		i++;
	}while(i<=n);
}
