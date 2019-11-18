#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cari , hasil , posisi;
    int angka[100];
    int i, j, a, n;
	int awal, akhir, tengah, jum =10;
    printf("Berapa data yg ingin di input : ");
	scanf("%d" , &n);
    printf("\nInput angka\n");
    for (i=0;i<n;i++)
    {
        printf("Data ke - %d : ", i+1); 
		scanf("%d", &angka[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(angka[i]>angka[j])
    		{
    			a=angka[i];
    			angka[i]=angka[j];
    			angka[j]=a;
			}
		}
	}
	printf("\n DATA SUDAH DI URUTKAN\n");
	for(i=0;i<n;i++)
	{
		printf("Data ke - %d : %d\n", i+1, angka[i]); 
	}
    

printf("\n\nMasukkan Data yang ingin dicari = \n");
	scanf("%d", &cari);
 
	awal = 0;
	akhir = n - 1;
	tengah = (awal+akhir)/2;
 
	for(awal = 0; awal<=akhir ; awal++)
	{
    	if (angka[tengah] < cari)
    	{
    		awal = tengah + 1;    
    	}
		else if (angka[tengah] == cari) 
		{
        	printf("Angka %d berada pada array indeks ke %d.\n", cari, tengah+1);
        	break;
      	}
      	else
        	akhir = tengah - 1;
    		tengah = (awal + akhir)/2;
   }
   
	if (awal > akhir)
		printf("Tidak Ketemu %d.\n", cari);
	return 0;  
}
