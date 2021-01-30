/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*menginput banyak kali looping*/
#include<stdio.h>
#include<cstdlib>
main()
{
	int banyak;
	
	printf("inputkan banyak looping= ");
	scanf("%d",&banyak);
	printf("\n");
	printf("Coba akan melooping %d kali\n\n",banyak);
	
	for(int i=0;i<banyak;i++)
		printf("looping ke %d \n",i);
	
	system("pause");
	return 0;
}
