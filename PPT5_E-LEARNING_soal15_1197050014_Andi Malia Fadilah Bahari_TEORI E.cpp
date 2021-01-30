/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 15
Buatlah program menghitung Faktor Persekutuan Terbesar (FPB)
dari dua bilangan yang diinputkan*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,b1,b2,f;
	printf("Masukan Bilangan pertama: ");
	scanf("%d",&b1);
	printf("Masukan Bilangan kedua  : ");
	scanf("%d",&b2);
	a=b1;
	b=b2;
	printf("FP dari bilangan %d: ",a);
	for(int i=1;i<a;i++)
	{
		a=a/i;
		if(i>1)
			printf("%d, ",i);
			if(a%i!=0)
				printf("%d, ",a);
	}
	printf("\n");printf("FP dari bilangan %d: ",b);
	for(int i=1;i<b;i++)
	{
		b=b/i;
		if(i>1)
			printf("%d, ",i);
			if(b%i!=0)
				printf("%d, ",b);
	}
	printf("\n");
	printf("FPB dari bilangan %d dan %d adalah ",b1,b2);
	while(b1!=b2)
	{
		if(b1>b2)
		{
			b1=b1-b2;
		}
	}
	printf("%d",b1);
}
