/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 1
Buatlah program untuk menampilkan angka dari 1-10 dengan menggunakan:
	while(){}
	Do{} while()
	For() {}*/
#include<stdio.h>
#include<conio.h>
#include<iomanip>
main()
{
	int i=1;
	printf("Program pengulangan untuk WHILE\n");
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	printf("Tekan tombol untuk melihat perulangan DO WHILE");
	getche();
	system("cls");
	i=1;
	printf("Program pengulangan untuk DO WHILE\n");
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=10);
	printf("Tekan tombol untuk melihat perulangan FOR");
	getche();
	system("cls");
	i=1;
	printf("Program pengulangan untuk FOR\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	
	
}
