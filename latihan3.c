#include <stdio.h>

// Fungsi untuk menukar nilai dua variabel menggunakan pointer
void swap(int *a, int *b) {
    int temp = *a;  // Menyimpan nilai dari *a ke dalam variabel sementara
    *a = *b;        // Mengganti nilai *a dengan nilai *b
    *b = temp;      // Mengganti nilai *b dengan nilai sementara
}

int main() {
    int num1, num2;
    
    // Meminta input dari pengguna
    printf("Masukkan angka pertama: ");
    scanf("%d", &num1);
    
    printf("Masukkan angka kedua: ");
    scanf("%d", &num2);
    
    // Menampilkan nilai sebelum ditukar
    printf("\nSebelum ditukar: \n");
    printf("Angka pertama: %d, Angka kedua: %d\n", num1, num2);
    
    // nilai menggunakan pointer
    swap(&num1, &num2);
    
    // nilai setelah ditukar
    printf("\nSetelah ditukar: \n");
    printf("Angka pertama: %d, Angka kedua: %d\n", num1, num2);
    
    return 0;
}
