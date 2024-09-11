#include <stdio.h>

int main() {
    // Mendeklarasikan buffer untuk menyimpan input string
    // Buffer ini memiliki ukuran 50 karakter, yang berarti dapat menampung string dengan panjang hingga 49 karakter ditambah 1 karakter null terminator.
    char input[50];

    // Mendeklarasikan pointer ke char yang akan menunjuk ke buffer input
    // Pointer ini akan digunakan untuk memproses string yang dimasukkan oleh asisten
    char *ptr;

    // Meminta input string dari asisten
    // 'gets' digunakan untuk membaca satu baris input dari stdin (keyboard) dan menyimpannya ke dalam buffer 'input'.
    // 'gets' membaca input hingga asisten menekan Enter dan menambahkan null terminator di akhir string.
    // PERHATIAN: Fungsi 'gets' sudah tidak dianjurkan karena rentan terhadap buffer overflow. Sebagai alternatif, gunakan 'fgets'.
    // Tapi, buat case simpel 'gets' masih oke aja
    printf("Masukkan sebuah string: ");
    gets(input);

    // Menginisialisasi pointer 'ptr' untuk menunjuk ke buffer 'input'
    // Pointer ini akan digunakan untuk mengakses dan menampilkan string.
    ptr = input;

    // Menampilkan string yang dimasukkan oleh asisten
    // 'printf' digunakan untuk mencetak string yang ditunjuk oleh pointer 'ptr'.
    // '%s' adalah format spesifier untuk string.
    printf("String yang dimasukkan adalah: %s\n", ptr);

    return 0; // Keluar dari program dengan kode sukses
}

// Nah ini salah satu contoh jika kita pake inputan, ini masih sangat sederhana
// Aku harap temen temen, bisa menjawab penasaran temen temen jika pake inputan kek gimana 
// Contoh selanjut nya, coba kita tambahin looping gimana ? Tenang aja, ini masih sederhana jadi jangan khawatir