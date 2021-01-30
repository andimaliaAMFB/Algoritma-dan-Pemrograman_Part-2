/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*KUMPULAN TUGAS!! kuis jumat tgl 28 nomor 1*/
#include<stdio.h>
#include<iomanip>
int main()
{
	int bil,n,t=0,i=1;
	printf("masukan berapa kali input = \n");
	scanf("%d",&n);
	
	do
	{
		printf("masukan bilangan %d = ",i);
		scanf("%d",&bil);
		
		if(bil%2==0)
			t=t+bil;
		
		i++;
	}while(i<=n);
}
