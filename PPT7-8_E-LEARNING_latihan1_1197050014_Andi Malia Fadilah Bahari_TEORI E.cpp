#include<stdio.h>
#include<conio.h>
#include<windows.h>

int input();
int cari(char* kalimat, char huruf);
int cetak(int frekuensi, char huruf,char* kalimat);

main()
{
	char jwb;
	do
	{
		system("cls");
		printf("Program Menghitung Frekuensi Kemunculan Huruf Dalam Sebuah Kalimat\n");
		printf("==================================================================\n\n");
		input();
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	return 0;
}

int input()
{
	char kal[100],hrf;
	printf("Masukan Sebuah Kalimat: ");scanf(" %[^\n]",&kal);
	printf("Huruf apa yang ingin anda hitung dalam kalimat tersebut? "); scanf("%s",&hrf);
	cari(kal,hrf);
}

int cari(char* kalimat, char huruf)
{
	int pjg_kal,frek;
	pjg_kal=strlen(kalimat);
	for(int i=0;i<pjg_kal;i++)
	{
		if(huruf==kalimat[i])
			frek++;
	}
	cetak(frek,huruf,kalimat);
}

int cetak(int frekuensi, char huruf,char* kalimat)
{
	printf("Banyak Huruf %c dalam Kalimat %s adalah %d\n",huruf,kalimat,frekuensi);
}
