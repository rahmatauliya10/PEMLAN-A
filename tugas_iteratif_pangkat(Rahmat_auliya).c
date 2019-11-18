#include <stdio.h>
#include <stdlib.h>


//metode iteratif
int main(){

	float z=1.0;
	int i,x,y;
	
	printf("Masukkan angka = ");
	scanf("%d",&x);
	printf("Masukkan pangkat = ");
	scanf("%d",&y);
	if (y==0){
		return 0;
	}
	if(y<=-1){
		for(i=-1;i>=y;i--){
		z=z*(1.0/x);
		}
	}
	else{
	
		for(i=1;i<=y;i++){
		z=z*x;
		}
	}
	printf("hasil dari %d pangkat %d = %lf",x,y,z);
	return 0;
}
