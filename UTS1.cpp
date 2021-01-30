#include<stdio.h>
#include<conio.h>
#include<windows.h>


main()
{
	int n,masuk['n'],keluar['n'],ttl['n'];
	char jwb;
	
	do
	{
		system("cls");
		printf("\nProgram untuk Menentukan Lama Bekerja Seorang Pegawai\n");
		printf("=========================================================\n\n");
		printf("Berapa banyak data yang akan dimasukan?");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			printf("Masukan Jam Masuk Anda: "); scanf("%d",&masuk[i]);
			printf("Masukan Jam Keluar Anda: "); scanf("%d",&keluar[i]);
			if(keluar[i]>12)
			{
				printf("Ulangi,\n Program ini hanya menerima angka 0-12\n");
				printf("Masukan Jam Keluar Anda: "); scanf("%d",&keluar[i]);
			}
			if(keluar[i]>masuk[i])
				ttl[i]=(keluar[i])-masuk[i];
			else
				ttl[i]=(12+keluar[i])-masuk[i];
			printf("\n");
		}
		system("cls");
		printf("|| Jam Masuk || Jam Keluar || Lama Bekerja ||\n");
		for(int i=0;i<n;i++)
		{
			if(keluar[i]>9)
				printf("||%6d     ||%7d     ||%8d      ||\n",masuk[i],keluar[i],ttl[i]);
			else
				printf("||%6d     ||%5d(PM)   ||%8d      ||\n",masuk[i],keluar[i],ttl[i]);
		}
		printf("Data Baru? [y/n]");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	printf("\nTerimakasih telah menggunakan jasa kami");
}

