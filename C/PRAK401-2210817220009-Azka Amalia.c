#include <stdio.h>
int main()
{
    int i, j, batas, angka;
    char simbol;
    batas=50;
    scanf("%d", &angka);
    scanf("%c", &simbol);
    for(i=1; i<=batas; i++){
            if(i%angka==0){
                printf("%c ", simbol);}
            else{
                printf("%d ", i);}}
    return 0;
}
