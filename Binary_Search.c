#include<stdio.h> 


int BinarySearch(int data[], int a, int b, int c)
{
    int nilaitengah = (a+b)/2;
    
	if(a>b)
	{
      return -1;
    } 
    
	else if(data[nilaitengah] == c)
	{
      return nilaitengah;
    }
    
	else if(data[nilaitengah] < c)
	{
      return BinarySearch(data, nilaitengah+1, b, c);
    } 
    
	else 
	{
      return BinarySearch(data, a, nilaitengah-1, c);
    }
}

int main ()
{
    int cari , hasil , posisi;
    int angka[100];
    int i, j, a, n;

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
    

    printf("Berapa angka yg ingin dicari: ");
    scanf("%d", &cari);

	posisi = BinarySearch(angka, 0, n-1, cari);
    
    if(posisi < 0)
	{
      printf("Angka %d pada data array tidak ditemukan", cari);
    }
	
	else 
	{
      printf("Angka %d ditemukan pada indeks ke %d", cari, posisi+1);
    }
    getch();
    return 0;
}



