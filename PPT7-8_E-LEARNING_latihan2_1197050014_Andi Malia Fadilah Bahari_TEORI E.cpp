#include<stdio.h>
#include<conio.h>
#include<windows.h>

int n;
int bil['n'];

int input();
int min(int n,int* bil);

main()
{
	char jwb;
	do
	{
		system("cls");
		printf("   Program Menentukan bilangan terkecil\n");
		printf("==========================================\n\n");
		input();
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}

int input()
{
	printf("Masukan banyak bilangan yang akan dimasukan: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(i==0)
			printf("Masukan bilangan pertama: ");
		else
			printf("Masukan bilangan ke-%d  : ",(i+1));
		scanf("%d",&bil[i]);
	}
	printf("\n");
	min(n,bil);
}

int min(int n,int* bil)
{
	int tmp;
	int *px['n'];
	for(int i=0;i<n;i++)//mengisi alamat memori variabel bil ke dalam pointer px//
	{
		px[i]=&bil[i];
	}
	printf("\n");
	for(int i=0;i<n;i++)//mengurutkan dari yang terkecil//
	{
		for(int j=i+1;j<n;j++)
		{
			if(*px[j]<*px[i])
			{
				tmp=*px[j];
				*px[j]=*px[i];
				*px[i]=tmp;
			}	
		}
	}
	printf("%d adalah bilangan terkecil\n",*px[0]);//setelah diurutkan maka array 0 adalah yang terkecil//
}
