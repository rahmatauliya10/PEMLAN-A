#include <stdio.h>
#include <math.h>

int main ()

{
    int angka[100];
    int i, j, tmp, n;

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
    
    	for(j=i; j>0 && angka[j-1] > angka[j];j--)
    	{
    		tmp = angka[j];
    		angka[j] = angka[j-1];
    		angka[j-1] = tmp;
    		
    
    		
		}
	}
	printf("\n DATA SUDAH DI URUTKAN\n");
	for(i=0;i<n;i++)
	{
		printf("Data ke - %d : %d\n", i+1, angka[i]); 
	}
	return 0;
}
