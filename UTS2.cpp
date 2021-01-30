#include<stdio.h>
#include<conio.h>
#include<windows.h>

main()
{
	int uph,upl,upt,jam,gol;
	char ulg;
	
	do
	{
		system("cls");
		printf("\n  Program Menghitung Gaji Karyawan Mingguan\n\n");
		printf("==============================================\n\n");
		printf("Masukan Jenis Golongan Anda: ");scanf("%d",&gol);
		printf("Masukan Jumlah Jam Kerja Anda Selama 1 Minggu: ");scanf("%d",&jam);
		
		switch(gol)
		{
			case 1:
				uph=3000;
				break;
			case 2:
				uph=3500;
				break;
			case 3:
				uph=4000;
				break;
			case 4:
				uph=5000;
				break;
			default:
				printf("Anda Memasukan Golongan Yang Salah");
		}
		if(jam>40)
		{
			jam=jam-40;
			upl=jam*1.5*uph;
			upt=(uph*40)+upl;
			jam=jam+40;
		}
		else if(jam>=0)
		{	
			upt=uph*jam;
		}
		printf("==================================================================\n\n");
		printf("Anda dari golongan %d telah bekerja selama %d jam selama seminggu\n",gol,jam);
		printf("Sehingga Anda Mendapatkan Upah Sebesar %d Rupiah\n",upt);
		
		printf("Apakah Anda Ingin Mengulangi Data? [y/n]");
		ulg=getche();	
	}while(ulg=='y'||ulg=='Y');
	printf("\nTerimakasih Telah Menggunakan Jasa Kami\n");
}
