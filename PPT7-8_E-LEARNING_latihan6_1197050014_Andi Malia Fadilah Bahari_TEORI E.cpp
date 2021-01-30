#include<stdio.h>
#include<conio.h>
#include<windows.h>

int x,y;

int koor();
int kuad(int x, int y);

main()
{
	char jwb;
	do
	{
		system("cls");
		printf("                 Program Mencari Letak Kuadran\n");
		printf("=============================================================\n\n");
		koor();
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}

int koor()
{
	printf("Masukan Koordinat X: ");scanf("%d",&x);
	printf("Masukan Koordinat Y: ");scanf("%d",&y);
	printf("Koordinat (%d,%d) Ada Pada Kuadran %d\n",x,y,kuad(x,y));
}

int kuad(int x, int y)
{
	int a[2]={x,y};
	if(x>0)
	{
		if(y>0)
			return 1;
		else
			return 4;
	}
	else
	{
		if(y>0)
			return 2;
		else
			return 3;
	}
}
