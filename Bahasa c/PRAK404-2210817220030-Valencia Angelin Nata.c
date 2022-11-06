#include <stdio.h>
int main(){
    float pil, n1, n2;
    while(1){
    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan: ");
    scanf("%f", &pil);
    if(pil > 5){
        printf("Input anda salah, silahkan coba lagi\n\n");
        continue;
    }else if(pil == 5){
        printf("Terimakasih, telah menggunakan kalkulator Valencia Angelin Nata");
        break;
    }
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &n1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &n2);
    if(pil == 1){
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1+n2);
    }else if(pil == 2){
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1-n2);
    }else if(pil == 3){
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1*n2);
    }else if(pil == 4){
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1/n2);
    }
  }
}
