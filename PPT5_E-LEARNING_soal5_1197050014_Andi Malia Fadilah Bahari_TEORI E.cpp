/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 5
Buatlah program untuk mencari bilangan terkecil
dari n bilangan yang diinputkan menggunakan looping!*/
#include<stdio.h>
#include<conio.h>
#include<iomanip>
main()
{
	int n,b['n'],ma,mi;
	printf("Masukan banyak pengulangan: ");
	scanf("%d",&n);
	
	//memasukan data//
	for(int i=1;i<=n;i++)
	{
		printf("Masukan bilangan %d: ",i);
		scanf("%d",&b[i]);
	}
	system("cls");
	//menampilkan data//
	for(int i=1;i<=n;i++)
	{
		printf("%d, ",b[i]);
	}
	printf("\n");
	//mengurutkan data//
	printf("urutan dari yang terbesar: ");
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(b[i]<b[j])
			{
				ma=b[j];
				b[j]=b[i];
				b[i]=ma;
			}
		}
		printf("%d, ",b[i]);
	}
	printf("\n");
	printf("urutan dari yang terkecil: ");
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(b[i]>b[j])
			{
				mi=b[i];
				b[i]=b[j];
				b[j]=mi;
			}
		}
		printf("%d, ",b[i]);
	}
}
