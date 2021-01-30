/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 12
Buatlah program menghitung rata-rata,total, min, dan max
dari n buah data yag di inputkan user!*/
#include<stdio.h>
#include<conio.h>
#include<iomanip>
main()
{
	int a['n'],ma=0,mi=0,t=0;
	float n;
	printf("Program menghitung rata-rata,total, min, dan max dari n buah data yag di inputkan user\n\n");
	printf("Masukan banyak bilangan: ");
	scanf("%f",&n);
	
	//input//
	for(int i=0;i<n;i++)
	{
		printf("Masukan bilangan ke %d: ",(i+1));
		scanf("%d",&a[i]);
	}
	getche();
	system("cls");
	//urutan masuk//
	for(int i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");
	
	//mengurutkan//
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])//urutan dari besar//
			{
				mi=a[i];
				a[i]=a[j];
				a[j]=mi;
			}
		}
	}
	printf("Urutan dari terbesar: ");
	for(int i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])//urutan dari kecil//
			{
				ma=a[i];
				a[i]=a[j];
				a[j]=ma;
			}
		}
	}
	printf("Urutan dari terkecil: ");
	for(int i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");
	
	//max & min//
	printf("Bilangan terbesar adalah %d\n",ma);
	printf("Bilangan terkecil adalah %d\n",mi);
	
	//total//
	for(int i=0;i<n;i++)
	{
		t=t+a[i];
	}
	printf("Total nilai dari bilangan yang dimasukan: %d\n",t);
	printf("Rata-rata nilai dari bilangan yang dimasukan: %f",(t/n));
	
	
}
