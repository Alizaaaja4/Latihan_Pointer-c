#include <stdio.h> 

// Fungsi untuk melakukan operasi matematika dan menyimpan hasilnya
// Parameter:
// - int a: Bilangan pertama
// - int b: Bilangan kedua
// - char operasi: Karakter yang menunjukkan operasi matematika yang dipilih
// - float *hasil: Pointer ke variabel untuk menyimpan hasil operasi
void kalkulator(int a, int b, char operasi, float *hasil) {
    // Memilih operasi berdasarkan nilai karakter operasi menggunakan switch-case
    switch (operasi) {
        case '+':
            *hasil = a + b;  // Penjumlahan
            break;
        case '-':
            *hasil = a - b;  // Pengurangan
            break;
        case '*':
            *hasil = a * b;  // Perkalian
            break;
        case '/':
            // Mengecek apakah pembagi tidak nol untuk menghindari pembagian dengan nol
            if (b != 0) {
                *hasil = (float)a / b;  // Pembagian
            } else {
                printf("Error: Pembagi tidak boleh nol!\n");
                *hasil = 0;  // Mengatur hasil menjadi 0 jika terjadi kesalahan
            }
            break;
        default:
            printf("Error: input yg bener wkwkw!\n");
            *hasil = 0;  // Mengatur hasil menjadi 0 jika operasi tidak valid
    }
}

int main() {
    int bilangan1, bilangan2;  // Variabel untuk menyimpan input bilangan
    char operasi;              // Variabel untuk menyimpan operasi matematika yang dipilih
    float hasil;               // Variabel untuk menyimpan hasil operasi

    // Meminta input dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);
    printf("Masukkan operasi (+, -, *, /): ");
    scanf(" %c", &operasi);  // Spasi sebelum %c untuk mengabaikan whitespace

    // Memanggil fungsi kalkulator untuk melakukan operasi matematika
    kalkulator(bilangan1, bilangan2, operasi, &hasil);

    // Menampilkan hasil operasi
    printf("Hasil: %.2f\n", hasil);

    return 0;
}

// Ini contoh studicase 'kalkulator sederhana', gimana keren ga ?
// Keren lah ya, nah sekarang aku mau challange teman teman asisten semua untuk
// bikin kalkulator untuk menghitung Energi kinetik dan energi potensial menggunakan library math.h
// Kalau sudah, kita lanjut ke modul 4 (perulangan)