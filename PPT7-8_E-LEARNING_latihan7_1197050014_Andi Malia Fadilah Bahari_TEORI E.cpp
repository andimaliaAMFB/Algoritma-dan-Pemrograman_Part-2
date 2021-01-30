#include<stdio.h>
#include<conio.h>
#include<windows.h>

int pecahan();
int sederhana(int b1,int b2);

main()
{
	char jwb;
	do
	{
		system("cls");
		printf("           Program Menyederhanakan Bilangan Pecahan\n");
		printf("=============================================================\n\n");
		pecahan();
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}

int pecahan()
{
	int a,b;
	printf("Masukan Bilangan Pembilang: "); scanf("%d",&a);
	printf("Masukan Bilangan Penyebut : "); scanf("%d",&b);
	sederhana(a,b);
}

int sederhana(int b1,int b2)
{
	int a,b,c,x;
	printf("Bentuk sederhana dari pecahan tersebut adalah ");
	
	if(b1%b2==0)
	{
		printf("%d",(b1/b2));
	}
	else
	{
		if(b1>b2)
		{
			for(int i=1;i<=b1;i++)
			{
				if(b1%i==0&&b2%i==0)
				{
					x=i;
				}
			}
			b1=b1/x;
			b2=b2/x;
			
			c=b1/b2;
			b=b2;
			a=b1%b2;
			
			printf("%3d\n\t\t\t\t\t      %d___\n%49d",a,c,b);
		}
		else if(b2>b1)
		{
			for(int i=1;i<=b2;i++)
			{
				if(b1%i==0&&b2%i==0)
				{
					x=i;
				}
			}
			a=b1/x;
			b=b2/x;
			
			printf("%1d\n\t\t\t\t\t     ___\n%47d",a,b);
		}
	}
	printf("\n\n");
}
