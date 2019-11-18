#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct nasabah{
	char nama[30];
	char norek[20];
	char bank [20];
	float saldo;
	struct alamat{
		char jalan[30];
		char kota[30];
		char provinsi[30];
	};
	struct ttl{
		int tanggal;
		char bulan[9];
		int tahun;
	};
	alamat alamat;
	ttl ttl;
};
int pilih,jumlah=0,ketemu,terbesar,terkecil,kembali;
nasabah nasabah[20];
float saldo_terbesar,saldo_terkecil;
char cari[30];
float akumulasi = 0, sterbesar, sterkecil;

int main(){
	menu :
		system("cls");
		puts("======= Selamat datang =======");
		puts("======    Di BANK UPN   ======");
		printf("================================================================\n");
		printf("|1. Tambah nasabah                                             |\n");
		printf("|2. Tampilkan data nasabah                                     |\n");
		printf("|3. Cari data nasabah                                          |\n");
		printf("|4. Hitung akumulasi saldo total                               |\n");
		printf("|5. Tampilkan nasabah junior (usia nasabah < 17 tahun)         |\n");
		printf("|6. Keluar                                                     |\n");
		printf("\nMasukkan nomor pilihan : ");
		scanf("%i", &pilih);
		fflush(stdin);
			switch(pilih){
				case 1	:
					system("cls");
					printf("Masukkan nama nasabah		: ");
					gets(nasabah[jumlah].nama);
					printf("Masukkan nomor rekening nasabah	: ");
					gets(nasabah[jumlah].norek);
					printf("Masukkan nama bank		: ");
					gets(nasabah[jumlah].bank);
					printf("Masukkan saldo nasabah		: ");
					scanf("%f", &nasabah[jumlah].saldo);
					fflush(stdin);
					printf("Alamat\n");
					printf("Masukkan nama jalan		: ");
					gets(nasabah[jumlah].alamat.jalan);
					printf("Masukkan nama kota		: ");
					gets(nasabah[jumlah].alamat.kota);
					printf("Masukkan nama provinsi		: ");
					gets(nasabah[jumlah].alamat.provinsi);
					printf("Tanggal lahir\n");
					printf("Masukkan tanggal		: ");
					scanf("%i", &nasabah[jumlah].ttl.tanggal);
					fflush(stdin);
					printf("Masukkan bulan			: ");
					gets(nasabah[jumlah].ttl.bulan);
					fflush(stdin);
					printf("Masukkan masukkan tahun		: ");
					scanf("%i", &nasabah[jumlah].ttl.tahun);
					fflush(stdin);
					jumlah++;
					goto menu;
				
				case 2	:
					system("cls");
				
					saldo_terbesar=0;
					saldo_terkecil=nasabah[0].saldo;
					for(int index=0; index<jumlah; index++){
					printf("Nama nasabah	: %s\n", nasabah[index].nama);
					printf("Nomor rekening	: %s\n", nasabah[index].norek);
					printf("Nama bank	: %s\n", nasabah[index].bank);
					printf("Saldo		: %.2lf\n", nasabah[index].saldo);
					printf("Alamat		: %s, %s, %s\n", nasabah[index].alamat.jalan, nasabah[index].alamat.kota, nasabah[index].alamat.provinsi);
					printf("Tanggal lahir	: %i %s %i\n", nasabah[index].ttl.tanggal, nasabah[index].ttl.bulan, nasabah[index].ttl.tahun);
					printf("========================================================================================================================\n");
					if(nasabah[index].saldo>saldo_terbesar){
						terbesar = index;
						saldo_terbesar = nasabah[index].saldo;
						}
					else if(nasabah[index].saldo<saldo_terkecil){
						terkecil = index;
						saldo_terkecil = nasabah[index].saldo;
						}
					}
					if(jumlah==0){
					printf("Data kosong!\n");
					}
					else{
					printf("\nNasabah dengan saldo terbesar adalah : %s,dengan total saldo Rp%.2lf", nasabah[terbesar].nama, nasabah[terbesar].saldo);
					printf("\nNasabah dengan saldo terkecil adalah : %s,dengan total saldo Rp%.2lf\n", nasabah[terkecil].nama, nasabah[terkecil].saldo);	
					}
					printf("apakah anda ingin kembali ke menu ?\n");
					printf("1. YA\n");
					printf("2. TIDAK \n");
					scanf("%i",&kembali);
					if(kembali==1){
						goto menu;
					}
					if(kembali==2){
					
						break;
					}
				
				case 3	:
					if (jumlah == 0){
					system("cls");
					printf("Data kosong!");
					printf("\nTekan enter untuk kembali ke menu");
					getch();
					goto menu;
					}
					ketemu = 0;
					system("cls");
				
					menu2	:
					system("cls");
					printf("1. Nama\n");
					printf("2. No. Rekening\n");
					printf("3. Nama bank\n");
					printf("4. Nama kota\n");
					printf("5. Nama provinsi\n");
					printf("6. Keluar\n");
					printf("Cari berdasarkan : ");
					scanf("%i", &pilih);
					fflush(stdin);
					switch(pilih){
					case 1 :
						system("cls");
						printf("Masukkan nama nasabah yang ingin dicari : ");
						gets (cari);
						for(int index=0; index<jumlah; index++){
							if(strstr(nasabah[index].nama,cari)){
								printf("Nama nasabah	: %s\n", nasabah[index].nama);
								printf("Nomor rekening	: %s\n", nasabah[index].norek);
								printf("Nama bank	: %s\n", nasabah[index].bank);
								printf("Saldo		: %f\n", nasabah[index].saldo);
								printf("Alamat		: %s, %s, %s\n", nasabah[index].alamat.jalan, nasabah[index].alamat.kota, nasabah[index].alamat.provinsi);
								printf("Tanggal lahir	: %i %s %i\n", nasabah[index].ttl.tanggal, nasabah[index].ttl.bulan, nasabah[index].ttl.tahun);
								printf("========================================================================================================================\n");
								ketemu++;
								getch();
								system("cls");
							}
						}
						if (ketemu == 0){
						system("cls");
								printf("Data tidak ditemukan!");
								printf("\nTekan enter untuk kembali ke menu");
								getch();
								goto menu;
							}
							printf("\ntekan 1.Untuk kembali mencari\n");
							printf("tekan 2. Keluar\n");
							scanf("%i",&kembali);
							if(kembali==1)
							goto menu2;
							if(kembali==2)
							goto menu;
							
							
					case 2 :
							system("cls");
							printf("Masukkan nomor rekening yang ingin dicari : ");
							gets (cari);
							for(int index=0; index<jumlah; index++){
								if(strstr(nasabah[index].norek,cari)){
									printf("Nama nasabah	: %s\n", nasabah[index].nama);
									printf("Nomor rekening	: %s\n", nasabah[index].norek);
									printf("Nama bank	: %s\n", nasabah[index].bank);
									printf("Saldo		: %f\n", nasabah[index].saldo);
									printf("Alamat		: %s, %s, %s\n", nasabah[index].alamat.jalan, nasabah[index].alamat.kota, nasabah[index].alamat.provinsi);
									printf("Tanggal lahir	: %i %s %i\n", nasabah[index].ttl.tanggal, nasabah[index].ttl.bulan, nasabah[index].ttl.tahun);
									printf("========================================================================================================================\n");
									ketemu++;
									getch();
									system("cls");
								}
							}
							if (ketemu == 0){
							system("cls");
								printf("Data tidak ditemukan!");
								printf("\nTekan enter untuk kembali ke menu");
								getch();
								goto menu;
							}
							getch();
							printf("\ntekan 1.Untuk kembali mencari\n");
							printf("tekan 2. keluar\n");
							scanf("%i",&kembali);
							if(kembali==1)
							goto menu2;
							if(kembali==2)
							goto menu;
					case 3 :
							system("cls");
							printf("Masukkan nama bank yang ingin dicari : ");
							gets (cari);
							for(int index=0; index<jumlah; index++){
								if(strstr(nasabah[index].bank,cari)){
									printf("Nama nasabah	: %s\n", nasabah[index].nama);
									printf("Nomor rekening	: %s\n", nasabah[index].norek);
									printf("Nama bank	: %s\n", nasabah[index].bank);
									printf("Saldo		: %f\n", nasabah[index].saldo);
									printf("Alamat		: %s, %s, %s\n", nasabah[index].alamat.jalan, nasabah[index].alamat.kota, nasabah[index].alamat.provinsi);
									printf("Tanggal lahir	: %i %s %i\n", nasabah[index].ttl.tanggal, nasabah[index].ttl.bulan, nasabah[index].ttl.tahun);
									printf("========================================================================================================================\n");
									ketemu++;
									getch();
									system("cls");
								}
							}
							if (ketemu == 0){
							system("cls");
								printf("Data tidak ditemukan!");
								printf("\nTekan enter untuk kembali ke menu");
								getch();
								goto menu;
							}
							getch();
							printf("\ntekan 1. Untuk kembali mencari\n");
							printf("tekan 2. keluar\n");
							scanf("%i",&kembali);
							if(kembali==1)
							goto menu2;
							if(kembali==2)
							goto menu;
					case 4 :
							system("cls");
							printf("Masukkan nama kota yang ingin dicari : ");
							gets (cari);
							for(int index=0; index<jumlah; index++){
								if(strstr(nasabah[index].alamat.kota,cari)){
									printf("Nama nasabah	: %s\n", nasabah[index].nama);
									printf("Nomor rekening	: %s\n", nasabah[index].norek);
									printf("Nama bank	: %s\n", nasabah[index].bank);
									printf("Saldo		: %f\n", nasabah[index].saldo);
									printf("Alamat		: %s, %s, %s\n", nasabah[index].alamat.jalan, nasabah[index].alamat.kota, nasabah[index].alamat.provinsi);
									printf("Tanggal lahir	: %i %s %i\n", nasabah[index].ttl.tanggal, nasabah[index].ttl.bulan, nasabah[index].ttl.tahun);
									printf("========================================================================================================================\n");
									ketemu++;
									getch();
									system("cls");
								}
							}
							if (ketemu == 0){
								system("cls");
								printf("Data tidak ditemukan!");
								printf("\nTekan enter untuk kembali ke menu");
								getch();
								goto menu;
							}
							getch();
							printf("\ntekan 1.Untuk kembali mencari\n");
							printf("tekan 2. keluar\n");
							scanf("%i",&kembali);
							if(kembali==1)
							goto menu2;
							if(kembali==2)
							goto menu;
					case 5 :
							system("cls");
							printf("Masukkan nama provinsi yang ingin dicari : ");
							gets (cari);
							for(int index=0; index<jumlah; index++){
								if(strstr(nasabah[index].alamat.provinsi,cari)){
									printf("Nama nasabah	: %s\n", nasabah[index].nama);
									printf("Nomor rekening	: %s\n", nasabah[index].norek);
									printf("Nama bank	: %s\n", nasabah[index].bank);
									printf("Saldo		: %f\n", nasabah[index].saldo);
									printf("Alamat		: %s, %s, %s\n", nasabah[index].alamat.jalan, nasabah[index].alamat.kota, nasabah[index].alamat.provinsi);
									printf("Tanggal lahir	: %i %s %i\n", nasabah[index].ttl.tanggal, nasabah[index].ttl.bulan, nasabah[index].ttl.tahun);
									printf("========================================================================================================================\n");
									ketemu++;
									getch();
									system("cls");
								}
							}
							if (ketemu == 0){
								system("cls");
								printf("Data tidak ditemukan!");
								printf("\nTekan enter untuk kembali ke menu\n");
								getch();
								goto menu;
							}
							getch();
							printf("\ntekan 1. Untuk kembali mencari\n");
							printf("tekan 2. Keluar\n");
							scanf("%i",&kembali);
							if(kembali==1)
							goto menu2;
							if(kembali==2)
							goto menu;
						case 6 :
							goto menu;
			
					}	
					break;
				case 4 :
				system("cls");
				for(int i = 0; i < jumlah; i++){
					akumulasi = akumulasi + nasabah[i].saldo;
					printf(" Nama %s       , Saldo	%f\n", nasabah[i].nama, nasabah[i].saldo);
				}
				printf("\nAkumulasi saldo nasabah sebesar Rp%f\n", akumulasi);
				printf("\nTekan enter untuk kembali ke menu");
				getch();
				akumulasi = 0;
				goto menu;
				break;
				
				case 5 :
				system("cls");
				for(int index = 0; index < jumlah; index++){
					int usia = 2019-nasabah[index].ttl.tahun;
					if(usia<17){
						printf("Nama nasabah	: %s\n", nasabah[index].nama);
						printf("Nomor rekening	: %s\n", nasabah[index].norek);
						printf("Nama bank	: %s\n", nasabah[index].bank);
						printf("Saldo		: %f\n", nasabah[index].saldo);
						printf("Alamat		: %s, %s, %s\n", nasabah[index].alamat.jalan, nasabah[index].alamat.kota, nasabah[index].alamat.provinsi);
						printf("Tanggal lahir	: %i %s %i\n", nasabah[index].ttl.tanggal, nasabah[index].ttl.bulan, nasabah[index].ttl.tahun);
						printf("========================================================================================================================\n");
					}
				}
				getch();
							printf("\ntekan 1. Untuk kembali ke menu\n");
							printf("tekan 2. Keluar\n");
							scanf("%i",&kembali);
							if(kembali==1)
							goto menu;
							if(kembali==2)
							break;
				case 6 :
				system("cls");
				printf("=====================================");
				printf("||Terimakasih selamat datang kembali :)||");
				printf("=====================================");
				break;
			
							
		}
}
			
			

