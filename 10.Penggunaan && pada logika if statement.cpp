/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*Penggunaan && pada logika if statement*/
#include<stdio.h>
#include<conio.h>
main()
{
	float x,y;
	
	printf("Selamat datang dan salam sejahtera!!\n");
	printf("------------------------------------\n\n");
	printf("Silahkan masukkan blangan positif atau negatif\n");
	printf("masukan nilai x: ");
	scanf("%f",&x);
	printf("\n");
	
	printf("masukan nilai y: ");
	scanf("%f",&y);
	printf("\n");
	
	if((x>0)&&(y>0))
	{
		printf("x dan y bernilai positif\n");
	}
	else
	{
		printf("x dan y bernilai negatif\n");
	}
	
	getch();
}
