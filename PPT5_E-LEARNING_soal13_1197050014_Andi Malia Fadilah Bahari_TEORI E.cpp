/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 13
Buat program untuk menampilkan:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
...*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	printf("Masukan banyak kolom: ");
	scanf("%d",&n);
	
	for(i=1;i<=(5*n);i++)
	{
		printf("%d ",i);
		if(i%5==0&&i!=0)
			printf("\n");
	}
}
