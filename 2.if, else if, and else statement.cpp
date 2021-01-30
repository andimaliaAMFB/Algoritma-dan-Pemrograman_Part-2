/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*if, else if, and else statement*/
#include<stdio.h>
#include<iomanip>
int main()
{
	int x;
	printf("masukan bilangan apa saja = \n");
	scanf("%d",&x);
	
	if(x>0)
		printf("x is positif\n");
	else if(x<0)
		printf("x is negatif\n");
	else
		printf("x is nol\n");
}
