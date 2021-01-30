/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*looping for*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	float rata,jumlah;
	int data[10];
	jumlah=0;
	
	printf("masukan jumlah array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("masukan data ke- %d: ",(i+1));
		scanf("%d",&data[i]);
		jumlah=jumlah +data[i];
		
		rata=jumlah/n;
	
		printf("Jumlah ke-%d data diatas adalah: %f\n",(i+1),jumlah);
		printf("Rata-rata ke-%d data diatas adalah: %f\n",(i+1),rata);
	}
	getch();
}

