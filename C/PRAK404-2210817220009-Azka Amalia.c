#include<stdio.h>
int main()
{
    int pilihan;
    float hasil, n1, n2;
    while(pilihan!=5){
        printf("Pilih program\n");
        printf("1.Penjumlahan\n");
        printf("2.Pengurangan\n");
        printf("3.Perkalian\n");
        printf("4.Pembagian\n");
        printf("5.Exit\n");
        printf("Masukkan Pilihan : ");scanf("%d", &pilihan);
        if(pilihan>5 || pilihan<=0){
            printf("Input anda salah, silahkan coba lagi\n\n");}
        else if(pilihan==5){
            printf("Terimakasih, telah menggunakan kalkulator Azka Amalia");
            break;}
        else{
                printf("Masukkan nilai pertama : ");scanf("%f", &n1);
                printf("Masukkan nilai kedua : ");scanf("%f", &n2);
                if(pilihan==1){
                    hasil = n1+n2;
                    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);}
                else if(pilihan==2){
                    hasil = n1-n2;
                    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);}
                else if(pilihan==3){
                    hasil = n1*n2;
                    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);}
                else if(pilihan==4){
                    hasil = n1/n2;
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);}}}
}
