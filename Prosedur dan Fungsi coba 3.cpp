#include<stdio.h>
#include<conio.h>
#include<windows.h>

void max(int a,int b,int c,int d);
void min(int a,int b,int c,int d);
void pos_neg_nol(int a,int b,int c,int d);
void rata(int a,int b,int c,int d);

main()
{
	int a,b,c,d;
	char jwb;
	do
	{
		system("cls");
		_sleep(150);
		printf("Masukan Bilangan Pertama : ");
		scanf("%i",&a);
		printf("Masukan Bilangan Kedua   : ");
		scanf("%i",&b);
		printf("Masukan Bilangan Ketiga  : ");
		scanf("%i",&c);
		printf("Masukan Bilangan Keempat : ");
		scanf("%i",&d);
		
		printf("\n\n");
		max(a,b,c,d);
		printf("\n\n");
		min(a,b,c,d);
		printf("\n\n");
		pos_neg_nol(a,b,c,d);
		printf("\n\n");
		rata(a,b,c,d);
		printf("\n\n");
		
		printf("Ulangi? [y/n]");
		jwb=getche();
	}while((jwb=='y'||jwb=='Y')&&(jwb!='n'||jwb!='N'));
	
	printf("\n\nTerimakasih telah menggunakan jasa kami\n\n");
}

void max(int a,int b,int c,int d)
{
	int tmp,z[4];
	z[0]=a;
	z[1]=b;
	z[2]=c;
	z[3]=d;
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(z[j]>z[i])
			{
				tmp=z[j];
				z[j]=z[i];
				z[i]=tmp;
			}
		}
	}
	
	printf("Urutan dari yang terbesar: ");
	for(int i=0;i<4;i++)
	{
		printf("%d, ",z[i]);
	}
}
void min(int a,int b,int c,int d)
{
	int tmp,z[4];
	z[0]=a;
	z[1]=b;
	z[2]=c;
	z[3]=d;
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(z[j]<z[i])
			{
				tmp=z[j];
				z[j]=z[i];
				z[i]=tmp;
			}
		}
	}
	
	printf("Urutan dari yang terkecil: ");
	for(int i=0;i<4;i++)
	{
		printf("%d, ",z[i]);
	}
}
void pos_neg_nol(int a,int b,int c,int d)
{
	int z[4];
	z[0]=a;
	z[1]=b;
	z[2]=c;
	z[3]=d;
	for(int i=0;i<4;i++)
	{
		if(z[i]==0)
			printf("%d adalah nol",z[i]);
		else if(z[i]!=0)
		{
			if(z[i]>0)
				printf("%d adalah bilangan positif",z[i]);
			else
				printf("%d adalah bilangan negatif",z[i]);
		}
		if(i==3)
			break;
		printf("\n");
	}
}
void rata(int a,int b,int c,int d)
{
	int jum=a+b+c+d;
	printf("Rata-rata bilangan yang dimasukan adalah %d",(jum/4));
}
