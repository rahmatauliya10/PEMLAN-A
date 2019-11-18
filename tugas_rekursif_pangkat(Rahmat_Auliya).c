#include <stdio.h>
#include <stdlib.h>


//metode rekursif
int bilangan(int x, int y) {		
	if(y==0){
		return 1;
	}
	else{
		return x*bilangan(x,y-1);
	}	
}
int ubah(int y){
	if (y<0){
		return(y*-1);
	}
	else{
		return(y);
	}
}

main (){
	int positif,x,y;
	double hasil;
	printf("Masukkan Angka: ");
	scanf("%d",&x);
	printf("Masukkan Pangkat: ");
	scanf("%d",&y);
	positif= ubah(y);
	hasil= bilangan(x,positif);
	if(y>0){ 
    	printf ("Bilangan %d pangkat %d adalah %.1lf", x, y, hasil); 
	}
	 else if(y<0){ 
    	printf ("Bilangan %d pangkat %d adalah %.15f", x, y, 1/hasil);  
	}
	
	
	



	return 0;
}


