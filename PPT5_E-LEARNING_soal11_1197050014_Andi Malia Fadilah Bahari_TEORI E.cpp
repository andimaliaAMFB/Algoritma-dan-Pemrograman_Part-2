/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 11
buat program untuk menampilkan 
deret 1,4,3,8,5,12,7, dst*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,a1=1,a2=4,b1=2,b2=4;
	printf("Program untuk menampilkan deret 1,4,3,8,5,12,7, dst\n");
	printf("Masukan banyak bilangan: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		if(i==0)
			printf("%d, ",a1);
		else if(i==1)
			printf("%d, ",(a2));
		else if(i%2==0)
			printf("%d, ",(a1+(i/2)*b1));
		else if(i%2!=0)
			printf("%d, ",(a2+((i-1)/2)*b2));
	}
}
