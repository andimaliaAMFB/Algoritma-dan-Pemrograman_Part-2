/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts praktikum AP1 nomor 2b*/
#include<stdio.h>
#include<iomanip>
#include<string.h>
main()
{
	char kata[10],n[]="nol",s[]="satu";
	printf("     MASUKKAN KATA NOL ATAU 1      \n");
	printf("===================================\n\n");
	
	printf("Masukan kata= ");
	scanf("%s",&kata);
	if(strcmp(kata,n)==0)
		printf("0\n");
	else if(strcmp(kata,s)==0)
		printf("1\n");
	else
		printf("EROR\n");
	printf("\n");
	
	system("pause");
}
