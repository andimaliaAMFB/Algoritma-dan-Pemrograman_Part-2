/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 1.2,3*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,j;
	printf("Masukan banyak Baris: ");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=3)
		{
			printf("%d ",i);
			j++;
		}
		printf("\n");
		i++;
	}
}
