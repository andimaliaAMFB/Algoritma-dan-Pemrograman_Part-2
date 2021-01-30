/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 9(tugas)
Buatlah program menghitung total dari
n buah data yang diinputkan user!*/
#include<stdio.h>
#include<conio.h>
main()
{
	int t=0,n,b=0;
	printf("program menghitung total dari n buah data yang diinputkan user\nbilangan genap saja yang kelipatan 6\n");
	printf("Masukan banyak bilangan: ");
	scanf("%d",&n);
	printf("%d bilangan genap yang kelipatan 6 adalah: ",n);
	for(int i=0;i<n;i++)
	{
		b=b+6;
		if(b%2==0&&b!=0)
		{
			printf("%d, ",b);
			t=t+b;
		}
	}
	printf("\nTotal bilangan genap yang kelipatan 6 adalah %d",t);
}
