/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 8
Buatlah program pemangkatan bilangan X pangkat Y
dengan loop*/
#include<stdio.h>
#include<conio.h>
main()
{
	int b,p,a=1;
	printf("Program pemangkatan bilangan X pangkat Y dengan loop\n");
	printf("Masukan Bilangan pertama: ");
	scanf("%d",&b);
	printf("Masukan Bilangan pangkat: ");
	scanf("%d",&p);
	
	printf("Hasil pemangkatan %d pangkat %d adalah ",b,p);
	if(p>0)
	{
		if(p>1)
		{
			for(int i=0;i<p;i++)
			{
				a=a*b;
			}
		}
		printf("%d",a);
	}
	else if(p<0)
	{
		p=p-p-p;
		if(p>1)
		{
			for(int i=0;i<p;i++)
			{
				a=a*b;
			}
		}
		printf("1\n\t\t\t\t      _\n%39d",a);
	}
	else
	{
		printf("%d",a);
	}
}
