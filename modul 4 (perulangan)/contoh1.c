#include <stdio.h>

int main() {
    int a = 0;        // Mendeklarasikan variabel integer 'a' dan menginisialisasinya dengan nilai 0
    int *cek = &a;    // Mendeklarasikan pointer 'cek' dan menginisialisasinya dengan alamat variabel 'a'
                      // Pointer 'cek' akan digunakan untuk mengakses dan memodifikasi nilai 'a'

    // Loop untuk mencetak angka dari 0 hingga 10
    // Loop ini akan berjalan selama nilai yang ditunjuk oleh pointer 'cek' (nilai 'a') kurang dari atau sama dengan 10
    // Pada setiap iterasi, nilai yang ditunjuk oleh pointer 'cek' akan ditingkatkan satu
    for (; *cek <= 10; (*cek)++) {
        // Menampilkan nilai yang ditunjuk oleh pointer 'cek' (nilai 'a') pada setiap iterasi
        printf("%d\n", *cek);  // '%d' format specifier digunakan untuk mencetak nilai integer
    }

    return 0;  // Mengembalikan 0 menandakan bahwa program selesai dengan sukses
}

// Gimana gaes mudahkan untuk menerapkan pointer pada looping ? Ini masih contoh yang sederhana
// Kita lanjut ke contoh 2, untuk 'do while loop', kek gimana sih code nya ....
