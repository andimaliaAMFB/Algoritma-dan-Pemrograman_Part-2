/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*quis jumat nomor 3*/
#include<stdio.h>
#include<conio.h>
#include<iomanip>
int saldo = 3000000;
int ambil,transfer;
int kredit, telepon, koran,rek;

void informasi()
{
	printf("Jumlah saldo anda adalah = %d \n",saldo);
	getch();
	system("cls;");
}

void penarikan()
{
	printf("masukan jumlah uang yang ingin anda ambil = \n");
	printf("(Jumlah penarika tidak lebih dari 2.000.0000)\n\n");
	printf("Rp. ");
	scanf("%d",&ambil);
	
	if(ambil>2000000)
		ambil=0;
	
	saldo=saldo-ambil;
	
	printf("Sisa saldo anda adalah = \nRp.%d\n",saldo);
	getch();
	system("cls");
}

void pembayaran()
{
	printf("Pembayaran Telepon, Kartu Kredit dan koran\n");
	printf("===========================================\n\n");
	
	printf("Masukan Pembayaran telepon = \nRp.");
	scanf("%d",&telepon);
	
	printf("Masukan Pembayaran kartu kredit = \nRp.");
	scanf("%d",&kredit);
	
	printf("Masukan Pembayaran tagihan koran = \nRp.");
	scanf("%d",&koran);
	
	saldo=saldo-(telepon+kredit+koran);
	
	printf("Sisa saldo anda adalah = \n Rp.%d\n",saldo);
	getch();
	system("cls");
}

void transfeer()
{
	printf("Masukan nomor rekening tujuan = \n");
	scanf("%d",&rek);
	
	printf("Masukan jumlah yang akan ditransfer = \n\nRp.");
	scanf("%d",&transfer);
	
	saldo=saldo-transfer;
	
	printf("sisa saldo anda adalah = \n\n");
	printf("Rp.%d\n",saldo);
	getch();
	system("cls");
}

void keluar()
{
	exit(0);
}

main()
{
	int pilih;
	
	printf("Silahkan Piliha Menu: \n\n");
	printf("1. Informasi Saldo\n");
	printf("2. Pengambilan Tunai\n");
	printf("3. Pembayaran\n");
	printf("4. Transfer\n");
	printf("5. keluar\n");
	
	printf("Pilihan anda: ");
	scanf("%d",&pilih);
	printf("======================================================================\n\n");
	
	if(pilih==1)
	{
		do
		{
			informasi();
			main();
		}while(true);
	}
	else if(pilih==2)
	{
		do
		{
			penarikan();
			main();
		}while(true);
	}
	
	else if(pilih==3)
	{
		do
		{
			pembayaran();
			main();
		}while(true);
	}
	
	else if(pilih==4)
	{
		do
		{
			transfeer();
			main();
		}while(true);
	}
	else if(pilih==5)
	{
		do
		{
			keluar();
			main();
		}while(true);
	}
	
}
