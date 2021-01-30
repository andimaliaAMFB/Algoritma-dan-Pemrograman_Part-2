#include<stdio.h>
#include<conio.h>
#include<windows.h>

main()
{
	char jwb;
	do
	{
		system("cls");
		_sleep(150);
		int bnyk_bil=0,bil,jum_bil=0,hasil=0;
		
		printf("Program yang Menampilkan Data yang Totalnya Tidak Lebih Dari 1000\n");
		printf("===================================================================\n\n");
		printf("Masukan bilangan: ");
		while(jum_bil<1000)
		{
			scanf("%d",&bil);
			bnyk_bil++;
			jum_bil=jum_bil+bil;
			if(jum_bil>=1000)
			{
				bnyk_bil--;
				hasil=jum_bil-bil;
			}
		}
		printf("\nBanyak Bilangan Sebelum Mencapai 1000 adalah %d bilangan\n",bnyk_bil);
		printf("Dengan total bilangan adalah %d\n",hasil);
		printf("===================================================================\n\n");
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}
