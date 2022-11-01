#include<stdio.h>
int main()
{
    int bil1, bil2, i, j;
    scanf("%d", &bil1);
    scanf("%d", &bil2);
    if(bil1<bil2){
        for(i=bil1,j=bil2; i<=bil2,j>=bil1; i++,j--){
            printf("%d %d ", i,j);
            if (j==bil1){
            break;}
            else{
                printf("-");}}}
    else{
        for(i=bil1,j=bil2; i>=bil2,j<=bil1; i--,j++){
            printf("%d %d ", i,j);
            if(j==bil1){
            break;}
            else{
                printf("-");}}}
}
