/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts teori AP1 nomor 2*/
#include<stdio.h>
#include<iomanip>
main()
{
	int a,b,c;
	
	printf("^.^ Selamat datang di aplikasi kuno ini^.^\n");
	printf("==========================================\n\n");
	
	printf("Masukan Nilai Awal A= ");
	scanf("%d",&a);
	printf("Masukan Nilai Awal B= ");
	scanf("%d",&b);
	printf("\n");
	
	printf("Setelah diTukar...\n");
	c=a;
	a=b;
	b=c;
	
	printf("Nilai A= %d\n",a);
	printf("Nilai B= %d\n",b);
	system("pause");
}
