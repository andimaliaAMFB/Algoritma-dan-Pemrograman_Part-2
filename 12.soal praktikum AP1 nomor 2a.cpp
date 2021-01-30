/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal praktikum AP1 nomor 2a*/
#include<stdio.h>
#include<iomanip>
main()
{
	int hari, pilih;
	printf("Keterangan Hari= \n");
	printf("1= Senin\n2= Selasa\n3= Rabu\n4= Kamis\n");
	printf("5= Jumat\n6= Sabtu\n7= Minggu\n");
	printf("=====================================\n\n");
	
	printf("Masukan angka hari= ");
	scanf("%d",&pilih);
	
	if(pilih==1)
		printf("Ini adalah hari SENIN\n");
	else if(pilih==2)
		printf("Ini adalah hari SELASA\n");
	else if(pilih==3)
		printf("Ini adalah hari RABU\n");
	else if(pilih==4)
		printf("Ini adalah hari KAMIS\n");
	else if(pilih==5)
		printf("Ini adalah hari JUMAT\n");
	else if(pilih==6)
		printf("Ini adalah hari SABTU\n");
	else if(pilih==7)
		printf("Ini adalah hari MINGGU\n");
	else
		printf("EROR\n");
	printf("\n");
	
	system("pause");
}
