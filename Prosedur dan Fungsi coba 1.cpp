#include<stdio.h>
void swap(int* a, int* b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main()
{
	int a,b;
	printf("Masukan Bilangan Pertama: ");
	scanf("%d",&a);
	printf("Masukan Bilangan Kedua  : ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Setelah ditukar\n");
	printf("Bilangan Pertama= %d\n",a);
	printf("Bilangan Kedua  = %d",b);
	return 0;
}
