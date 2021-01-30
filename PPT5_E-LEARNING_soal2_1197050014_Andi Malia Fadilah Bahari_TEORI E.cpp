/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 2
Tuliskan algoritma untuk menuliskan teks lagu anak
"anak ayam turun tinggal induknya"*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	printf("Lagu anak 'Anak Ayam Turun'\n");
	printf("Masukan banyak anak ayam: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((n-i)!=0)
		{
			printf("Anak Ayam turun %d, mati 1 tinggal %d\n",(n-(i-1)),(n-i));
		}
		else
		{
			printf("Anak Ayam turun %d, mati 1 tinggal induknya\n",(n-(i-1)));
		}
	}
}
