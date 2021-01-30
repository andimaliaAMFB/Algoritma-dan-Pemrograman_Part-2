/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 18
Buatlah program pencari bilangan prima dari 1-100!*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,cek;
	printf("program pencari bilangan prima dari 1-100\n");
	printf("Masukan batas akhir bilangan prima: ");
	scanf("%d",&n);
	
	printf("1, ");
	for(int i=2;i<=n;i++)
	{
		cek=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
				cek=1;
		}
		if(cek==0)
			printf("%d, ",i);
	}
}
