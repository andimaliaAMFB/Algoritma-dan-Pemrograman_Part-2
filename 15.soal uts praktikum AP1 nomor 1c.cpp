/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts praktikum AP1 nomor 1c*/
#include<stdio.h>
#include<iomanip>
main()
{
	int n;//n adalah jumlah bilangan
	
	printf("^.^ Selamat Datang di Aplikasi Kuno Ini^.^\n");
	printf("============================================\n\n");
	printf("Masukan Jumlah Bilangan= ");
	scanf("%d",&n);
	
	for(int kali=0;kali<n;kali++)
	{
		for(int kali=0;kali<n;kali++)
			printf("%d ",n);
		printf("\n");
	}
	n=0;
	system("pause");
}
