/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 10
Buatlah program untuk menghitung deret
1-3+5-7+9-...n*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n,b1=4,b2=-4;
	printf("program untuk menghitung deret 1-3+5-7+9-...n\n");
	printf("masukan banyak bilangan: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		if(i==0)
			printf("%d ",(a));
		else if(i==1)
			printf("%d + ",(a+i*b2));
		else if(i%2==0)
			printf("%d ",(a+(i/2)*b1));
		else if(i%2!=0)
			printf("%d + ",(a+((i+1)/2)*b2));
	}
}
