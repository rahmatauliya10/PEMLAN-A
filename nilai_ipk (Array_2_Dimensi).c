#include <stdio.h>

float skor(int tugas,int uts,int uas);
void matkul (float skor, int sks, char *huruf, int *point, int *jumlah);

typedef struct {
	char nama[20],matkul[20],huruf;
	int nmk,tugas,uts,point,uas,sks,jml,tsks,tjml;
	float skor,ipk;
}mahasiswa;


int main(){
	int x,y=1,m,loop;
	char lain;
	mahasiswa mhs[20][10];
	y=1;
	printf("Masukkan jumlah mahasiswa : ");
	scanf("%d",&m);
	fflush(stdin);
	system("cls");
	for (x=1;x<=m;x++){
		printf("===========================================================================================\n");
		printf("Masukkan Nama ke %d : ",x);
		gets(mhs[x][0].nama);
		y=1;
		mhs[x][0].nmk=1;
        mhs[x][0].tsks=0;
        mhs[x][0].tjml=0;
			
		loop :
			printf("===========================================================================================\n");
			printf("Masukkan nama  matkul ke %d : " ,y);
			gets(mhs[x][y].matkul);
			printf("Masukkan nilai matkul %s \n",mhs[x][y].matkul);
			printf("Tugas = ");
			scanf("%d",&mhs[x][y].tugas);
			printf("UTS = ");
			scanf("%d",&mhs[x][y].uts);
			printf("UAS = ");
			scanf("%d",&mhs[x][y].uas);
			printf ("Jumlah SKS Matkul = ");
			scanf("%d",&mhs[x][y].sks);
			fflush(stdin);
			mhs[x][y].skor=skor(mhs[x][y].tugas, mhs[x][y].uts, mhs[x][y].uas);
			matkul(mhs[x][y].skor, mhs[x][y].sks, &mhs[x][y].huruf, &mhs[x][y].point, &mhs[x][y].jml);
			mhs[x][0].tsks+=mhs[x][y].sks;
        	mhs[x][0].tjml+=mhs[x][y].jml;
			printf("Apakah ingin meginput matkul lainnya ? (Y/N)");
			scanf("%c",&lain);
			 if (lain == 'Y'|| lain == 'y'){
			 	fflush(stdin); 
				y++; 
				mhs[x][0].nmk++; 
				goto loop;
			 }
			 mhs[x][0].ipk=mhs[x][0].tjml/mhs[x][0].tsks;
			 fflush(stdin);		
	}
	
	system("cls");
	for(x=1;x<=m;x++){
		 y=1;
        printf("%s\n",mhs[x][0].nama);
        printf("+----+----------------+-------+-------+-----+--------+\n");
        printf("| No |    Mata kuliah | Huruf | Point | SKS | Jumlah |\n");
        printf("+----+----------------+-------+-------+-----+--------+\n");
        for(y=1;y<=mhs[x][0].nmk;y++)
        {
            printf("| %02d | %14s | %3c   | %3d   | %2d  | %4d   |\n",y, mhs[x][y].matkul, mhs[x][y].huruf,
                   mhs[x][y].point, mhs[x][y].sks, mhs[x][y].jml);
        }
        printf("+----+----------------+-------+-------+-----+--------+\n");
        printf("| Total =                             | %2d  | %4d   |\n",mhs[x][0].tsks,mhs[x][0].tjml);
        printf("+-------------------------------------+-----+--------+\n");
        printf("     Index Prestasi : %f",mhs[x][0].ipk);
        printf("\n\n");
	}
	
	
}
float skor (int tugas,int uts,int uas)
{
    return tugas*0.25 + uts*0.3 + uas*0.45;
}
 
 void matkul (float skor, int sks, char *huruf, int *point, int *jumlah)
{
    if (skor >= 85)
    {
        *huruf='A';
        *point=4;
    }
    else if (skor >=71 && skor <85)
    {
        *huruf='B';
        *point=3;
    }
    else if (skor >=56 && skor <71)
    {
        *huruf='C';
        *point=2;
    }
    else if (skor >=45 && skor < 56)
    {
        *huruf='D';
        *point=1;
    }
    else if (skor <45)
    {
        *huruf='E';
        *point=0;
    }
    *jumlah=*point*sks;
}
