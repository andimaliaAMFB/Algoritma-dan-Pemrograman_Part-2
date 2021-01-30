/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
kasus 1.while*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("masukan n= ");scanf("%d",&n);
	int i=1,j=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		i++;
		printf("\n");
	}
	getch();
}
