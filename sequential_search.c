#include <stdio.h>
#include <stdlib.h>

int main(){
	int index[8]={0,1,2,3,4,5,6,7,8};
	int ketemu;
	int cari;
	int i;
	
	printf("Masukkan data yang dicari= ");
	scanf("&d",&cari);
	i=0;
	ketemu=0;
	while(i<10 && ketemu !=1){
		if(index[i]==cari){
			ketemu=1;
		}
		else{
			i++;
		}
	}
	if(ketemu==1){
		printf("ada");
	}
	else{
		printf("Tidak ada");
	}
}
