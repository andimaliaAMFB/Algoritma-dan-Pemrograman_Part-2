/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 9_2(ganjil)
Buatlah program menghitung total dari
n buah data yang diinputkan user!*/
#include<stdio.h>
#include<conio.h>
main()
{
	int t=0,n;
	printf("program menghitung total dari n buah data yang diinputkan user\nbilangan ganjil saja\n");
	printf("Masukan banyak bilangan: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2)
	{
		t=t+i;
	}
	printf("Total bilangan ganjil dari 1-%d adalah %d",n,t);
}
