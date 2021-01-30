/*Andi Malia Fadilah Bahari_1197050014
Praktikum F*/
/*menampilkan huruf abjad*/
#include<stdio.h>
#include<conio.h>
main()
{
	char abjad;
	abjad = 'A';
	do
	{
		printf("%c ",abjad);
		abjad+=1;
	}while(abjad<='Z');
	printf("\n");
}
