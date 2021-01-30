/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts AP1 nomor 3*/
#include<stdio.h>
#include<iomanip>
main()
{
	int n,kali, star;
	star=0;
	kali=0;
	printf("Masukan bilangan= ");
	scanf("%d",&n);
	
	while(kali<n)
	{
		kali++;
		while(star<kali)
		{
			printf("*");
			star++;
		}
		printf("\n\n");
	}
	system("pause");
}
