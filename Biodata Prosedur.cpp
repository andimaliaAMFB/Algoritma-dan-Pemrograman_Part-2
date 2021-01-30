#include<stdio.h>
#include<windows.h>
#include<conio.h>

int nim,sem;
char nama[50],kel[10],jur[50],fak[50],univ[50];

void input();
void output();
void strip();

main()
{
	char jwb;
	do
	{
		system("cls");
		printf("            Program Biodata Mahasiswa\n");
		strip();
		input();
		output();
		printf("\n\n");
		printf("Ulangi Program? [y/n] ");
		jwb=getche();
	}while(jwb=='y'||jwb=='Y');
}

void strip()
{
	for(int i=0;i<5;i++)
		printf("==========");
	printf("\n\n");
}

void input()
{
	printf("Masukan Data\n\n");
	printf("Nama       : ");scanf("%[^\n]",&nama);
	printf("NIM        : ");scanf("%d",&nim);
	printf("Kelas      : ");scanf(" %[^\n]",&kel);
	printf("Semester   : ");scanf("%d",&sem);
	printf("Jurusan    : ");scanf(" %[^\n]",&jur);
	printf("Fakultas   : ");scanf(" %[^\n]",&fak);
	printf("Universitas: ");scanf(" %[^\n]",&univ);
	printf("\n");
	system("cls");
}
void output()
{
	printf("            Program Biodata Mahasiswa\n");
	strip();
	printf("Nama       : %s\n",nama);
	printf("NIM        : %d\n",nim);
	printf("Kelas      : %s\n",kel);
	printf("Semester   : %d\n",sem);
	printf("Jurusan    : %s\n",jur);
	printf("Fakultas   : %s\n",fak);
	printf("Universitas: %s\n",univ);
	printf("\n");
	strip();
}
