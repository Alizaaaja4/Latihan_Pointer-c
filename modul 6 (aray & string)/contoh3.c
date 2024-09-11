#include <stdio.h>

// Mendefinisikan struktur mahasiswa
struct mahasiswa {
    char nama[30]; // Menyimpan nama lengkap mahasiswa dengan maksimum 30 karakter
    int umur;      // Menyimpan umur mahasiswa
};

int main() {
    struct mahasiswa mhs[100]; // Array untuk menyimpan data hingga 100 mahasiswa
    int jumlah, i; // Variabel untuk menyimpan jumlah mahasiswa yang akan dimasukkan dan iterator

    // Meminta input jumlah mahasiswa yang akan dimasukkan
    printf("Masukkan jumlah mahasiswa (maksimum 100): ");
    scanf("%d", &jumlah);

    getchar(); 

    // Memastikan jumlah mahasiswa tidak melebihi batas maksimum
    if (jumlah > 100) {
        printf("Jumlah mahasiswa melebihi batas maksimum!\n");
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // Looping untuk memasukkan data mahasiswa
    for (i = 0; i < jumlah; i++) {
        // Mendapatkan pointer ke elemen ke-i dari array mahasiswa
        struct mahasiswa *ptr = &mhs[i]; 

        // Input nama lengkap mahasiswa
        printf("Masukkan nama lengkap mahasiswa ke-%d: ", i + 1);
        // Membaca nama lengkap mahasiswa dari input pengguna
        // `gets(ptr->nama);` membaca input hingga newline dan menyimpannya ke dalam ptr->nama
        gets(ptr->nama); 

        // Input umur mahasiswa
        printf("Masukkan umur mahasiswa ke-%d: ", i + 1);
        // Membaca umur mahasiswa dari input pengguna
        // `scanf("%d", &ptr->umur);` membaca umur mahasiswa dan menyimpannya ke dalam ptr->umur
        scanf("%d", &ptr->umur);

        
        getchar(); 
    }

    // Menampilkan data mahasiswa yang telah dimasukkan
    printf("\nData Mahasiswa:\n");
    for (i = 0; i < jumlah; i++) {
        // Mendapatkan pointer ke elemen ke-i dari array mahasiswa
        struct mahasiswa *ptr = &mhs[i]; 

        // Menampilkan nama lengkap mahasiswa
        // Mengakses nama mahasiswa dari ptr->nama dan menampilkannya
        printf("Mahasiswa %d\n", i + 1);
        printf("Nama Lengkap: %s\n", ptr->nama);

        // Menampilkan umur mahasiswa
        // Mengakses umur mahasiswa dari ptr->umur dan menampilkannya
        printf("Umur: %d\n\n", ptr->umur);
    }

    return 0; 
}

// Ini contoh looping + string + pointer wkwkwk, aku udh buat sederhana mungkin, semoga temen temen dapat memehami ini
// Nanti jika aku kepikiran case lain, ntrr ku tambah wkwkw