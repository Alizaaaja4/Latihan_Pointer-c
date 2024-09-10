#include <stdio.h>

void tambah(int *a, int *b, int *hasil) {
    *hasil = *a + *b;
}

int main() {
    int num1, num2, hasil;
    
    // Meminta input dari pengguna
    printf("Masukkan angka pertama: ");
    scanf("%d", &num1);
    
    printf("Masukkan angka kedua: ");
    scanf("%d", &num2);
    
    // Menghitung jumlah menggunakan pointer
    tambah(&num1, &num2, &hasil);
    
    // Menampilkan hasil
    printf("Hasil penjumlahan: %d\n", hasil);
    
    return 0;
}
