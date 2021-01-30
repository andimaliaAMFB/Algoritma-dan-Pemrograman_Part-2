#include<stdio.h>
#include<conio.h>
#include<windows.h>

int input();
int kete(int* nilai,int pos);
int cetak(int* nilai,char**pelajaran,char**keterangan,int n);

main()
{
	char jwb;
	do
	{
		printf("         Program Mengubah Nilai Menjadi Bobot [A/B/C/D/E]\n");
		printf("==================================================================\n\n");
		input();
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
	return 0;
}

int input()
{
	int x,a['x'];
	char pel['x'],ket['x'];
	char *p_pel['x'],*p_ket['x'];
	printf("Berapa banyak Nilai Yang Akan Anda Masukan? ");scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		printf("\n");
		printf("Mata Kuliah: ");scanf(" %[^\n]",&pel[i]);
		printf("Nilai      : ");scanf("%d",&a[i]);
		ket[i]=kete(a,i);
		
		p_pel[i]=&pel[i];
		p_ket[i]=&ket[i];
	}
	cetak(a,p_pel,p_ket,x);
}

int kete(int* nilai,int pos)
{
	int *p_x;
	char ket;
	
	p_x=&nilai[pos];
	if(*p_x>=80&&*p_x<=100)
		ket='A';
	else if(*p_x>=70&&*p_x<80)
		ket='B';
	else if(*p_x>=60&&*p_x<70)
		ket='C';
	else if(*p_x>=50&&*p_x<60)
		ket='D';
	else if(*p_x>=0&&*p_x<50)
		ket='E';
	
	return ket;
}

int cetak(int* nilai,char**pelajaran,char**keterangan,int n)
{
	int *p_x;
	int x=n;
	char *p_pel,*p_ket;
	system("cls");
	printf("Berikut Nilai Anda Yang Telah Diinput:\n\n");
	printf("||  Mata Kuliah  ||  Nilai  || Keterangan ||\n");
	for(int i=0;i<x;i++)
	{
		p_x=&nilai[i];
		printf("||%d||\n",*p_x);
		printf("%s\n",pelajaran[i]);
	}
	printf("\n");
}

