#include<stdio.h>
#include<conio.h>
#include<windows.h>

int input();
int ttl(int byk);

main()
{
	char jwb;
	do
	{
		system("cls");
		printf("     Program Untuk Menjumlahkan Total dari Deret 1+3+5+...+n\n");
		printf("=====================================================================\n\n");
		printf("Jumlah Total dari banyak deret yang dimasukan adalah %d\n\n",input());
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}

int input()
{
	int n;
	printf("Masukan Banyak Bilangan: ");
	scanf("%d",&n);
	return ttl(n);
}

int ttl(int byk)
{
	int a=1,jum=0;
	printf("Deret:");
	for(int i=0;i<byk;i++)
	{
		if(i!=0)
			a+=2;
		printf(" %d ",a);
		if(i!=byk-1)
			printf("+");
		jum=jum+a;
	}
	printf("\n");
	return jum;
}
