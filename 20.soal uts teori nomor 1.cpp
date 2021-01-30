/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts teori nomor 1*/
#include<stdio.h>
#include<iomanip>
main()
{
	int f,c;
	
	printf("^.^ Selamat datang di aplikasi kuno ini^.^\n");
	printf("==========================================\n\n");
	
	printf("Masukan Nilai Suhu Fahrenheit= ");
	scanf("%d",&f);
	
	c=5*(f-32)/9;
	printf("Suhu Dalam Derajat Celsius Adalah %d \n",c);
	system("pause");
}
