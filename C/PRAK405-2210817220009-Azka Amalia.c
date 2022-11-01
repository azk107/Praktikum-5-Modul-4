#include <stdio.h>
int main()
{
    int baris, angka, i, j, bil1, bil2, bil3, hasil, jumlah;
    scanf("%d %d", &baris, &angka);
    for(i=1;i<=baris;i++){
        for(j=i;j>1;j--){
            printf("(%d*%d)+", j,angka);}
        for(bil1=1, hasil=bil1*angka; bil1<i; bil1++, hasil+=(bil1*angka)){}
        printf("(%d*%d)=%d\n", j,angka,hasil);}
    for(bil2=1, bil3=1, jumlah=0;bil2<=baris;bil3+=bil2+1, bil2++){
        jumlah+=bil3*angka;}
    printf("%d", jumlah);
}
