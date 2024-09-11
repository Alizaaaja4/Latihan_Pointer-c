#include <stdio.h>

int main() {
    int angka = 10;  // Deklarasi variabel -> ini deklarasi biasa (tidak ada spesial, jadi aman 😁)
    int *ptr;        // Deklarasi pointer -> tidak harus selalu pake 'ptr', kalian bisa ubah jadi 'testing' atau nama lain yg kalian suka.
                     // Tapi jangan lupa harus ada (*) asterisk didepan nya !!

    // Menyimpan alamat variabel 'angka' ke pointer 'ptr'
    ptr = &angka;

    // Menampilkan nilai dan alamat memori variabel 'angka'  000000b67c9ff834
    printf("Nilai angka: %d\n", angka);
    printf("Alamat angka: %p\n", &angka); // apa itu %p ? untuk menampilkan alamat memori (pointer) dari suatu variabel.
                                        // nilai dari %p (alamat memori) dapat berubah setiap kali program dijalankan.
                                       // Ini terjadi karena alokasi memori untuk variabel di banyak sistem operasi modern 
                                      // dilakukan secara dinamis. Salah satu mekanisme yang menyebabkan perubahan alamat memori
                                     // adalah ASLR (Address Space Layout Randomization).  

    // Mengakses nilai variabel 'angka' melalui pointer
    printf("Nilai yang ditunjuk oleh ptr: %d\n", *ptr);

    // Mengubah nilai variabel 'angka' melalui pointer
    *ptr = 20;

    // Menampilkan nilai yang baru
    printf("Nilai angka setelah diubah melalui pointer: %d\n", angka);

    return 0;
}

// Kalian bisa coba untuk modifkasi sendiri, nah sekarang gimana jika kita tukar 2 nilai ?
// lanjut ke contoh 2 ya
