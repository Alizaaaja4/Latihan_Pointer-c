#include <stdio.h>

// Fungsi untuk menghitung panjang string menggunakan pointer
int hitungPanjang(char *str) {
    int panjang = 0; // Variabel untuk menyimpan panjang string (jumlah karakter)

    // Menggunakan pointer untuk berjalan melalui setiap karakter dalam string
    // Loop ini akan berjalan selama pointer *str tidak menunjuk ke karakter null ('\0')
    while (*str != '\0') {
        panjang++;  // Setiap kali menemukan karakter yang valid, panjang ditambah 1
        str++;      // Pointer str digeser untuk menunjuk ke karakter berikutnya
        // str++ ini membuat pointer maju satu posisi ke alamat berikutnya dalam memori
        // Dengan ini, kita bisa membaca setiap karakter satu per satu tanpa indeks
    }

    return panjang;  // Mengembalikan panjang string (jumlah total karakter sebelum '\0')
}

int main() {
    // Deklarasi array karakter untuk menyimpan string yang akan dihitung panjangnya
    char kata[] = "Belajar C";  // String ini secara otomatis diakhiri dengan '\0' oleh kompiler

    // Memanggil fungsi hitungPanjang() dan menampilkan hasilnya
    // Fungsi hitungPanjang menerima pointer ke string (alamat dari elemen pertama string)
    // 'kata' adalah array karakter, yang dalam konteks ini otomatis diterjemahkan sebagai pointer ke elemen pertama array
    printf("Panjang string '%s' adalah: %d\n", kata, hitungPanjang(kata));

    return 0;  // Mengembalikan 0 untuk menunjukkan bahwa program berhasil dijalankan
}


// gimana aman ? kalau kebingun, temen temen bisa tanya ke abang kakak atau mungkin bisa diskusi
// mengenai pointer di modul 2 ini. Sisanya silahkan temen temen self learning sendiri ya..
// Lanjut ke modul 3 tentang percabangan