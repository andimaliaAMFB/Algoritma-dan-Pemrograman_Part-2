/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts praktikum AP1 nomor 2c*/
#include<stdio.h>
#include<iomanip>
main()
{
	int angka;
	
	printf("Masukan Angka= ");
	scanf("%d",&angka);
	
	if(angka%2!=0)
		printf("ganjil\n\n");
	else if(angka==0)
		printf("tidak ganjil dan tida genap\n\n");
	else
		printf("genap\n\n");
	system("pause");
}
