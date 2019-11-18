#include <stdio.h>

main (){

int i, j, cari, npm[100], x;
float ipk[100];
printf ("Program Pencarian \n");
printf("Masukkan Jumlah Elemen dalam Array : \n");
scanf("%d", &x);

for(i=0; i<x; i++){
	printf("Masukkan NPM %d :\n", i+1);
	scanf("%d", &npm[i]);
	printf("Masukkan IPK %d : \n",i+1);
	scanf("%f",&ipk[i]);
}
system("cls");
cari:
printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(npm[i] == cari){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
			}
	
return 0;
}
}





