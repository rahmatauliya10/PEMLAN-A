#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data_mahasiswa
{
	int npm[100];
	float ipk[100];
};

int main(){
	struct data_mahasiswa mhs;
	mhs.npm[0] =1;
	mhs.ipk[0]= 3.00;
	int input, i,cari;	
	menu :
	printf ("pilih menu: \n");
	printf ("1.Semua data\n2.pencarian data\n");
	printf ("masukkan pilihan: ");
	scanf ("%d",&input);
	if (input == 1){
		for (i=0;i<=2;i++)
		{
		printf ("npm= %d memiliki nilai %f \n",mhs.npm[i],mhs.ipk[i]);
		}
		
		goto menu;	
	}
	else if(input == 2){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<4; i++){
				if(mhs.npm[i] == cari){
					printf("Npm : %d\n", mhs.npm[i]);
					printf("ipk : %f\n", mhs.ipk[i]);
					break;
	}
	return 0;
	}
}
}
