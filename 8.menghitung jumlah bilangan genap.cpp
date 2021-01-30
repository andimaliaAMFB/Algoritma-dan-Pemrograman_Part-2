/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*menghitung jumlah bilangan genap*/
#include<stdio.h>
#include<conio.h>
main()
{
	int bil,n,t=0,i=1;
	
	printf("masukan berapa kali input= \n");
	scanf("%d",&n);
	
	do
	{
		printf("masukan bilangan %d = ",i);
		scanf("%d",&bil);
		
		if(bil%2==0)
			t=t+bil;
		
		i++;
	}while(i<=n);
	
	printf("total bilangan genap adalah= %d\n",t);
}
