#include <stdio.h>
#define phi 3.14

void tambah(float *a, float *b, float *hasilkan){
    *hasilkan = *a + *b;
}

void kurang(float *a, float *b, float *hasilkan){
    *hasilkan = *a - *b;
}

void kali(float *a, float *b, float *hasilkan){
    *hasilkan = *a * *b;
}

void bagi(float *a, float *b, float *hasilkan){
    *hasilkan = *a / *b;
}

int main (){
    int pilih;
    float number1, number2, result;
    printf("== Kalkulator tes pointer ==\n");
    printf("[1]. Tambah\n[2]. Kurang\n[3]. Perkalian\n[4].Pembagian\n");
    printf("/> "); scanf("%d", &pilih);
    switch (pilih)
    {
    case 1:
        printf("Angka 1: "); scanf("%f", &number1);
        printf("Angka 2: "); scanf("%f", &number2);

        tambah(&number1, &number2, &result);

        printf("Result: %.2f\n", result);
        break;

    case 2:
        printf("Angka 1: "); scanf("%f", &number1);
        printf("Angka 2: "); scanf("%f", &number2);

        kurang(&number1, &number2, &result);

        printf("Result: %.2f\n", result);
        break;  

    case 3:
        printf("Angka 1: "); scanf("%f", &number1);
        printf("Angka 2: "); scanf("%f", &number2);

        kali(&number1, &number2, &result);

        printf("Result: %.2f\n", result);
        break;  

    case 4:
        printf("Angka 1: "); scanf("%f", &number1);
        printf("Angka 2: "); scanf("%f", &number2);

        bagi(&number1, &number2, &result);

        printf("Result: %.2f\n", result);
        break;

    default: printf("Pilih yang benar!!");
        break;
    }

    return 0;

}