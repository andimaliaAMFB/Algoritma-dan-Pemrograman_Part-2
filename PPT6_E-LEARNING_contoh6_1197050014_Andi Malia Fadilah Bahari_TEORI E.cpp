/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
contoh 6*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		printf("Awal dari outer loopl\n");
		printf("Outer loop couter: %d\n",i);
		for(j=0;j<=2;j++)
		{
			printf("Inner loop counter: %d\n",j);
		}
		printf("Akhir dari outer loop\n");
	}
	getch();
}
