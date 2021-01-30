/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 5
soal 17
Buatlah program pengecek suatu bilangan adalah prima atau bukan!*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("program pengecek suatu bilangan adalah prima atau bukan\n");
	printf("Masukan suatu bilangan: ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(a%i!=0)
			printf("%d adalah bilangan prima",a);
		else if(a==2)
		{
			printf("%d adalah bilangan prima",a);
			break;
		}
		else if(a%i==0)
		{
			if(i!=1&&i!=a)
			{
				printf("%d bukan bilangan prima",a);
				break;
			}
		}
	}
}
