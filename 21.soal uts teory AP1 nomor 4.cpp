/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts teory AP1 nomor 4*/
#include<stdio.h>
#include<conio.h>
#include<iomanip>
main()
{
	int pil,af=0,bd=0,sr=0,pemlh=10,index=0;
	printf("_____________Pemilu Berintegritas______________\n");
	printf("===============================================\n\n");
	printf("===Daftar Calon Ketua dan Wakil Ketua HIMATI===\n");
	printf("===============================================\n\n");
	
	printf("1.Arif-Firman(AF)\n");
	printf("2.Bambang-Devina(BD)\n");
	printf("3.Sri-Rahman(SR)\n\n");
	printf("===============================================\n\n");
	
	do
	{
		printf("Masukan Calon Pilihan Anda (1,2,3)= ");
		scanf("%d",&pil);
		
		if(pil==1)
		{
			printf("Anda Telah Memilih Arif dan Firman\n");
			af++;
		}
		else if(pil==2)
		{
			printf("Anda Telah Memilih Bambang dan Devina\n");
			bd++;
		}else if(pil==1)
		{
			printf("Anda Telah Memilih Sri dan Firman\n");
			sr++;
		}
		index++;
		getch();
		system("cls");
	}while(index<pemlh);
	
	printf("Ketua dan Wakil Ketua Terpilih adalah \n");
	printf("=======================================\n\n");
	
	if((af>bd)&&(af>sr))
	{
		printf("Peringkat 1 adalah Arif dan Firman\n\n");
		if(bd>sr)
		{
			printf("Peringkat 2 adalah Bambang dan Devina\n\n");
			printf("Peringkat 3 adalah Sri dan Rahman\n\n");
		}
		else if(sr>bd)
		{
			printf("Peringkat 2 adalah Sri dan Rahman\n\n");
			printf("Peringkat 3 adalah Bambang dan Devina\n\n");
		}
	}
	else if((bd>af)&&(bd>sr))
	{
		printf("Peringkat 1 adalah Bambang dan Devina\n\n");
		if(af>sr)
		{
			printf("Peringkat 2 adalah Arif dan Firman\n\n");
			printf("Peringkat 3 adalah Sri dan Rahman\n\n");
		}
		else if(sr>af)
		{
			printf("Peringkat 2 adalah Sri dan Rahman\n\n");
			printf("Peringkat 3 adalah Arif dan Firman\n\n");
		}
	}
	else if((sr>bd)&&(sr>af))
	{
		printf("Peringkat 1 adalah Sri dan Rahman\n\n");
		if(bd>af)
		{
			printf("Peringkat 2 adalah Bambang dan Devina\n\n");
			printf("Peringkat 3 adalah Arif dan Firman\n\n");
		}
		else if(af>bd)
		{
			printf("Peringkat 2 adalah Arif dan Firman\n\n");
			printf("Peringkat 3 adalah Bambang dan Devina\n\n");
		}
	}
	printf("Selamat kedapa Ketua dan Wakil Ketua Terpilih!!!\n\n");
}
