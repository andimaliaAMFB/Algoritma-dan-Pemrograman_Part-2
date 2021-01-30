/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*Menampilkan Bulan*/
#include<stdio.h>
#include<conio.h>
main()
{
	int kode_bulan;
	
	printf("selamat datang dan salam sejahtera!!\n\n");
	
	printf("keterangan kode bulan: \n\n");
	printf("1=januari\n2=februari\n3=maret\n4=april\n5=mei\n6=juni\n7=juli\n8=agustus\n9=september\n10=oktober\n11=november\n12=desember\n\n");
	printf("masukan kode bulan: ");
	scanf("%d",&kode_bulan);
	printf("\n");
	
	if(kode_bulan == 1)
		printf("ini bulan = januari\n\n");
	else if(kode_bulan == 2)
		printf("ini bulan = februari\n\n");
	else if(kode_bulan == 3)
		printf("ini bulan = maret\n\n");
	else if(kode_bulan == 4)
		printf("ini bulan = aprill\n\n");
	else if(kode_bulan == 5)
		printf("ini bulan = mei\n\n");
	else if(kode_bulan == 6)
		printf("ini bulan = juni\n\n");
	else if(kode_bulan == 7)
		printf("ini bulan = juli\n\n");
	else if(kode_bulan == 8)
		printf("ini bulan = agustus\n\n");
	else if(kode_bulan == 9)
		printf("ini bulan = september\n\n");
	else if(kode_bulan == 10)
		printf("ini bulan = oktober\n\n");
	else if(kode_bulan == 11)
		printf("ini bulan = november\n\n");
	else if(kode_bulan == 12)
		printf("ini bulan = desember\n\n");
	else
		printf("Maaf, kode bulan yang anda masukan salah!!\n");
		
	getch();
}
