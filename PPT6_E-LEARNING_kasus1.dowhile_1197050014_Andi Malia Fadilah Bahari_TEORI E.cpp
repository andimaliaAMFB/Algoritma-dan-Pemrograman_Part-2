/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
kasus 1.Do while*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("masukan n= ");scanf("%d",&n);
	int i=1,j=1;
	do
	{
		j=1;
		do
		{
			printf("*");
			j++;
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=n);
	getch();
}
