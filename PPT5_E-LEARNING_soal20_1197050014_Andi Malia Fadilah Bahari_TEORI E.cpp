/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 20
Buat  program permutasi nPr dan nCr
P=n!/(n-r)!
C=n!/(n-r)r!*/
#include<stdio.h>
#include<conio.h>
#include<iomanip>
int long fak(int n);

main()
{
	int pil,n,r,npr,ncr;
	char ulg;
	do
	{
		system("cls");
		printf("Program permutasi nPr dan nCr\n\n");
		printf("Pilih pilihan anda: \n");
		printf("1. Kombinasi\n");
		printf("2. Permutasi\n");
		printf("3. EXIT\n");
		printf("Pilihan: ");
		scanf("%d",&pil);
		
		switch(pil)
		{
			case 1:
				system("cls");
				printf("Kombinasi\n");
				printf("Masukan nilai n: ");
				scanf("%d",&n);
				printf("Masukan nilai r: ");
				scanf("%d",&r);
				
				if(n>r)
				{
					ncr=fak(n)/(fak(n-r)*fak(r));
					printf("     n!%14d!\n",n);
					printf("___________  = ___________\n");
					printf(" (n-r)!*r!      (%d-%d)!*%d!\n",n,r,r);
					printf("     %16d\n",fak(n));
					printf("\t     = ___________\n");
					printf("\t\t  (%d)*%d\n",fak(n-r),fak(r));
					printf("\t     =%2d\n",ncr);
					printf("Kombinasinya adalah %d\n",ncr);
				}
				else if(n<r)
				{
					printf("Data tidak VALID\n");
				}
				break;
			
			case 2:
				system("cls");
				printf("Permutasi\n");
				printf("Masukan nilai n: ");
				scanf("%d",&n);
				printf("Masukan nilai r: ");
				scanf("%d",&r);
				
				if(n>r)
				{
					npr=fak(n)/fak(n-r);
					printf("     n!%14d!\n",n);
					printf("___________  = ___________\n");
					printf("   (n-r)!        (%d-%d)!\n",n,r);
					printf("     %16d\n",fak(n));
					printf("\t     = ___________\n");
					printf("\t\t   (%d)\n",fak(n-r));
					printf("\t     =%2d\n",npr);
					printf("Permutasinya adalah %d\n",npr);
				}
				else if(n<r)
				{
					printf("Data tidak VALID\n");
				}
				
				break;
			
			case 3:
				printf("\n");
				break;
		}
		printf("Ulangi pilihan?(y/n)");
		ulg=getche();
	}while(ulg=='y'||ulg=='Y');
}

int long fak(int n)
{
	int long f=1;
	if(n<=0)
	{
		return 0;
		
	}
	else
	{
		for(int i=2;i<=n;i++)
		{
			f=f*i;
		}
		return (f);
	}
}
