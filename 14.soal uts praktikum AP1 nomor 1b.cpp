/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts praktikum AP1 nomor 1b*/
#include<stdio.h>
#include<iomanip>
main()
{
	int n;//n adalah jumlah bilangan
	
	printf("Masukan jumlah bilangan= ");
	scanf("%d",&n);
	
	for(int kali=0;kali<n;kali++)
	{
		for(int bintang=n;bintang>kali;bintang--)
			printf("%d ",bintang);
		printf("\n");
	}
	n=0;
	system("pause");
}
