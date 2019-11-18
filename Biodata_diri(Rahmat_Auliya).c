#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 4"); 
	char nama[20],kelas[20],npm[20],hobi[20],fakultas[20],jurusan[20];
	int a;
	

	printf("===============================================================\n");
	printf("=== 			 TULISKAN BIODATA		    ===\n");
	printf("===============================================================\n\n");
	
	printf("Nama : ");
	fgets(nama, sizeof nama, stdin);
    printf("Kelas: ");
	fgets(kelas, sizeof kelas, stdin);
	printf("NPM : ");
	fgets(npm, sizeof npm, stdin);
	printf("Hobi: ");
	scanf("%19[^\n]",hobi);
	getchar();
	printf("Fakultas : ");
	fgets(fakultas, sizeof fakultas, stdin);
	printf("Jurusan : ");
	fgets(jurusan, sizeof jurusan, stdin);
	
	system("cls");
	
	printf("===============================================================\n");
	printf("=== 			 BIODATA		            ===\n");
	printf("===============================================================\n\n");
	
	printf("Nama = %s", nama);
	printf("Kelas = %s", kelas);
	printf("NPM = %s", npm);
	printf("Hobi = %s\n", hobi);
	printf("Fakultas = %s", fakultas);
	printf("Jurusan = %s",jurusan);
	
	
	return 0;
}



