/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*soal uts praktikum AP1 nomor 3*/
#include<stdio.h>
#include<iomanip>
main()
{
	int baris,kolom,hitung=1;
	
	printf("^.^ Selamat datang di aplikasi kuno ini^.^\n");
	printf("==========================================\n\n");
	
	printf("Masukan jumlah baris= ");
	scanf("%d",&baris);
	printf("Masukan jumlah kolom= ");
	scanf("%d",&kolom);
	printf("\n");
	
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			printf("%d ",hitung);
			hitung+=baris;//hitung sama dengan hitung di tambah baris
		}
		hitung=i+2;//hitung adalah hitung yang akan muncul dalam tiap baris
		printf("\n");
	}
	baris =0;
	kolom=0;
	system("pause");
}
