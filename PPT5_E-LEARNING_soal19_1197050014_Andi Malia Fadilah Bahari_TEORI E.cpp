/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 19
Buatlah program pencari bilangan fibonacci pada deret ke-n!
bilangan fibonacci adalah bilangan seperti: 1 1 2 3 5 8 13... dst
Jadi jika inputan n=7, maka hasil adalah 13!*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,j['n'],a,b,x;
	j[0]=0;
	j[1]=1;
	printf("program pencari bilangan fibonacci pada deret ke-n\n");
	printf("Masukan batas deret: ");
	scanf("%d",&n);
	
	printf("%d, %d, ",j[0],j[1]);
	a=j[0];
	b=j[1];
	x=a+b;
	
	for(int i=0;i<n;i++)
	{
		printf("%d, ",x);
		a=b;
		b=x;
		x=a+b;
	}
}
