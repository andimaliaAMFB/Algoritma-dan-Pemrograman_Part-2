/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 7
Buatlah program mengkalikan 2 buah bilangan 
tanpa menggunakan operator '*'!*/
#include<stdio.h>
#include<conio.h>
main()
{
	int b1,b2,h=0;
	printf("Program mengkalikan 2 buah bilangan tanpa menggunakan operator '*'\n");
	printf("Masukan Bilangan pertama: ");
	scanf("%d",&b1);
	printf("Masukan Bilangan kedua  : ");
	scanf("%d",&b2);
	
	printf("Hasil perkalian %d dengan %d adalah ",b1,b2);
	if(b2>0)
	{
		for(int i=0;i<b2;i++)
		{
			h=h+b1;
		}
	}
	else if(b2<0)
	{
		b2=b2-b2-b2;
		for(int i=0;i<b2;i++)
		{
			h=h+b1;
		}
		h=h-h-h;
	}
	printf("%d",h);
}
