#include <stdio.h>

int main() {
    int data[] = {10, 20, 30, 40, 50};  // Array yang menyimpan data
    int jumlahData = sizeof(data) / sizeof(data[0]); // Menghitung jumlah elemen dalam array
    int n; // Variabel untuk menyimpan jumlah input dari pengguna
    int i = 0; // Indeks untuk iterasi array

    // Meminta input dari pengguna
    printf("Berapa kali Anda ingin menampilkan data? (max %d): ", jumlahData);
    scanf("%d", &n); // Membaca jumlah tampilan dari input pengguna

    // Validasi input pengguna
    // Mengecek jika input lebih besar dari jumlah data yang tersedia
    if (n > jumlahData) {
        printf("Input melebihi jumlah data yang tersedia.\n");
        return 1; // Mengembalikan 1 menandakan kesalahan
    }

    // Loop while untuk menampilkan data sesuai dengan jumlah input pengguna
    while (i < n) {
        // Menampilkan data dari array
        // data[i] mengakses elemen array yang sesuai dengan indeks 'i'
        printf("Data ke-%d: %d\n", i + 1, data[i]);

        // Mengupdate indeks untuk iterasi berikutnya
        i++; // Meningkatkan indeks 'i' untuk mengakses elemen berikutnya
    }

    printf("Program selesai.\n"); // Menampilkan pesan bahwa program telah selesai

    return 0; // Mengembalikan 0 menandakan bahwa program selesai dengan sukses
}

// Wah contoh ke 3 ini, saya coba pake inputan. Biar temen temen enggak penasaran hehe
// Setelah ini, kita akan lanjut untuk contoh penggunaan pointer pada fungsi