/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 1.2,2*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Masukan Bilangan terbesar: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
