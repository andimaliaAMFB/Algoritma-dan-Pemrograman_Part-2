#include<stdio.h>
#include<conio.h>
#include<windows.h>

int jam;
int mnt;
int dtk;

int ttl(int jam,int mnt, int dtk);

main()
{
	char jwb;
	do
	{
		system("cls");
		printf("      Program Konversi Waktu Menjadi Detik\n");
		printf("================================================\n\n");
		printf("Masukan Total Jam  : "); scanf("%d",&jam);
		printf("Masukan Total Menit: "); scanf("%d",&mnt);
		printf("Masukan Total Detik: "); scanf("%d",&dtk);
		printf("================================================\n\n");
		printf("Total Detik Yang Anda Masukan Adalah %d detik\n\n",(ttl(jam,mnt,dtk)));
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}

int ttl(int jam,int mnt, int dtk)
{
	dtk=dtk+mnt*60+jam*3600;
	return dtk;
}
