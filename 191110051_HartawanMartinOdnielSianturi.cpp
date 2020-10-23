#include<stdio.h>
#include<conio.h>
int main()
{
struct Rumah_sakit
{
char nama[50];
char alamat[100];
int tggi[5], brt[5];
char golda[3];
char ayah[50];
char ibu[50];
};
printf ("+++++++++++++++++++++++++++++++++++++++++++++\n");
printf ("========Rumah Sakit Harta Jaya ==============\n");
printf ("++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

Rumah_sakit pasien;
printf("Masukkan Identitas Pasien di bawah ini : \n");
printf("\nNama : ");
scanf("%s",pasien.nama);
printf("Alamat : ");
scanf("%s",pasien.alamat);
printf("Golongan darah : ");
scanf("%s",pasien.golda);
printf("Tinggi Badan : ");
scanf("%d",pasien.tggi);
printf("Berat badan : ");
scanf("%d",pasien.brt);
printf("\n========================================\n");
printf(" Masukkan Nama Orang tua Pasien...\n");
printf("\nAyah : ");
scanf("%s",pasien.ayah);
printf("Ibu : ");
scanf("%s",pasien.ibu);
getch();

int kamar;
FILE *frs;
printf("\n\n");
printf("Anda Memasuki tahap selanjutnya...\n");
printf("\n>>Pemesanan Kamar\n");
printf("Anda ingin memesan kamar : \n");
printf("\n1. Kamar VVIP\n2. Kamar VIP\n3. General\n\n");
printf("Masukkan pilihan Anda : ");
kamar = getch();

int total;
int vvip=3, vip=2, gen=1;
int hari;
char setuju;


switch (kamar)
{
case '1':
printf("\nAnda telah memilih kamar VVIP\n");
printf("Harga sewa kamar Rp 3.000.000,00/hari\n");
printf("Apakah Anda setuju? (Y/N)\n");
setuju = getch();
switch (setuju)
{
case 'y':
printf("\nBerapa hari hari Pasien dirawat : \n");
scanf("%d",&hari);
total=hari*vvip;
printf("\nTotal Biaya Yang Pasien Bayar : %d juta",total);
(frs,"\nAnda telah memilih kamar VIP\nHarga sewa kamar Rp 3.000.000,00 /hari\nselama %d hari\ndengan biaya %d juta rupiah\n",hari,total);
getch();
return 0;
break;

case 'n':
printf("Mohon maaf anda tidak dapat menginap disini");
break;
};
break;

case '2':
printf("\nAnda telah memilih kamar VIP\n");
printf("Harga sewa kamar Rp 2.000.000,00 /hari\n");
printf("Apakah Anda setuju? (Y/N)\n");
setuju = getch();
switch (setuju)
{
case 'y':
printf("\nBerapa hari hari Pasien dirawat : \n");
scanf("%d",&hari);
total=hari*vip;
printf("\nTotal Biaya Yang Pasien Bayar : %d juta",total);
printf("\nAnda telah memilih kamar VIP\nHarga sewa kamar Rp 2.000.000,00 /hari\nselama %d hari\ndengan biaya %d juta rupiah\n",hari,total);
getch();
return (0);
break;

case 'n':
printf("Mohon maaf anda tidak dapat menginap disini");
break;
};
break;

case '3':
printf("\nAnda telah memilih kamar General\n");
printf("Harga sewa kamar Rp 1.000.000,00/hari\n");
printf("Apakah Anda setuju? (Y/N)\n");
setuju = getch();
switch (setuju)
{
case 'y':
printf("\nBerapa hari Pasien dirawat : ");
scanf("%d",&hari);
total =hari*gen;
printf("\nTotal Biaya Yang Pasien Bayar : %d juta",total);
printf("\nAnda telah memilih kamar VIP\nHarga sewa kamar Rp 1.000.000,00 @hari\nselama %d hari\ndengan biaya %d juta rupiah\n",hari,total);
getch();

return (0);
break;

case 'n':
printf("Mohon maaf anda tidak dapat menginap disini");
break;
};
break;

}getch();

}
	
	
