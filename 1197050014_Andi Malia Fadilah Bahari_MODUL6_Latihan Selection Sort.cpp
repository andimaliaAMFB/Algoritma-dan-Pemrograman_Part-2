#include<stdio.h>
#include<conio.h>
#include<windows.h>

void title()
{
	system("cls");
	printf("            Program Mengurutkan Angka\n");
	printf("================================================\n\n");
}

main()
{
	char jwb;
	do
	{
		int n,no['n'],p_min,tmp=0;
		title();
		
		printf("Berapa Banyak Data Yang Akan Anda Masukan? ");
		scanf("%d",&n);
		
		//input data//
		for(int i=0;i<n;i++)
		{
			printf("Masukan Angka: ");scanf("%d",&no[i]);
		}
		printf("Mengurutkan DATA...");
		_sleep(500);
		printf("Tekan 'Enter'");
		getch();
		title();
		
		
		printf("Deret Awal : ");
		for(int i=0;i<n;i++)
		{
			printf("%d",no[i]);
			if(i!=n-1)
				printf(", ");
			else
				printf("\n");
		}
		printf("_______________________\n");
		//sorting data//
		for(int i=0;i<n-1;i++)
		{
			p_min=i;
			printf("Proses ke-%d. ",(i+1));
			for(int j=i+1;j<n;j++)
			{
				if(no[i]>=no[j])
				{
					p_min=j;
					if(no[i]!=no[p_min])
					{
						tmp=no[i];
						no[i]=no[p_min];
						no[p_min]=tmp;
					}
				}
				
			}
			for(int k=0;k<n;k++)
			{
				printf("%d ",no[k]);
			}
			printf("\n");
		}
		printf("_______________________\n");
		
		printf("Deret Hasil: ");
		for(int i=0;i<n;i++)
		{
			printf("%d",no[i]);
			if(i!=n-1)
				printf(", ");
			else
				printf("\n");
		}
		printf("_______________________\n");
		
		printf("\nUlangi Program? [y/n] ");
		jwb=getch();
	}while(jwb=='y'||jwb=='Y');
	
	printf("\n\nTerimakasih Telah Menggunakan Jasa Kami\n\n");
	return 0;
}
