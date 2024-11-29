#include <stdio.h>

int main(){

    int x, y, hasil;

    printf("masukan angka pertama : ");
    scanf("%d", &x);
    printf("masukan angka kedua : ");
    scanf("%d", &y);

    hasil = x * y;
    printf("jumlah perkalian %d dan %d adalah : %d", x, y, hasil);
    return 0;

}