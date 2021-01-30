/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 4
Tampilkan semua bilangan kelipatan 7 yang habis dibagi 2
dari 1-50!*/
#include<stdio.h>
#include<conio.h>
main()
{
	int b;
	for(b=0;b<=50;b+=7)
	{
		if(b%2==0&&b>0)
			printf("%d, ",b);
	}
}
