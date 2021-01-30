/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 6
buatlah tabel harga fotokopian dari 1-100 lembar,
dimana harga perlembar kertas adalah 95 rupiah!*/
#include<stdio.h>
#include<conio.h>
main()
{
	printf("  Jumlah  ||  Harga(Rp)  ||\n");
	for(int i=0;i<100;i++)
	{
		printf("%5d     ||Rp.%3d,-     ||\n",(i+1),(95*(i+1)));
	}
}
