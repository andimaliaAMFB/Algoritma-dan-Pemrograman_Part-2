/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 14
Buatlah Program pengkonversi basis bilangan 10
ke biner!*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int d,a=2,b;
	printf("Program pengkonversi basis bilangan 10 ke biner\n");
	printf("Masukan bilangan desimal: ");
	scanf("%d",&d);
	
	for(int i=10;i>=0;i--)
	{
		b=pow(a,i);
		if(d>=b)
		{
			d=d-b;
			printf("1 ");
		}
		else if(d<=b)
		{
			printf("0 ");
		}
	}
}
