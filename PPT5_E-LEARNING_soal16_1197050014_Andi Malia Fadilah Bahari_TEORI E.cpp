/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 16
Buatlah program pembalik kata/kalimat!*/
#include<stdio.h>
#include<conio.h>
#include<cstring>
main()
{
	char k[50];
	int n_k;
	printf("Program pembalik kata atau Kalimat\n");
	printf("Masukan Kata/Kalimat: ");
	scanf("%[^\n]",&k);
	
	n_k=strlen(k);
	
	printf("Kata/kalimat setelah dibalik: ");
	for(int i=0;i<=n_k;i++)
	{
		printf("%c",k[n_k-i]);
	}
}
