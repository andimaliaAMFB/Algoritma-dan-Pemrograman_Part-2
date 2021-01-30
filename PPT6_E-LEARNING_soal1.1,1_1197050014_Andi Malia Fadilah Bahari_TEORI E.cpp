/*Andi Malia Fadilah Bahari_1197050014
TEORI E*/
/*Modul 6
soal 1.1,1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,f;
	printf("Masukan Faktorial terbesar: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		f=1;
		printf("%d!= ",i);
		for(int j=1;j<=i;j++)
		{
			f=f*j;
			printf("%d ",j);
			if(j==i)
			{
				break;
			}
			printf("x ");
		}
		printf("= %d\n",f);
	}
}
