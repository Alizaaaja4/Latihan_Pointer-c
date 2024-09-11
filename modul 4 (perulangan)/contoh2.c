#include <stdio.h>

int main() {
    int a = 10;        // Mendeklarasikan variabel integer 'a' dan menginisialisasinya dengan nilai 10
    int *ptr = &a;     // Mendeklarasikan pointer 'ptr' dan menginisialisasinya dengan alamat dari variabel 'a'

    // Loop do-while untuk mencetak angka dari 10 hingga 0
    do {
        // Menampilkan nilai yang ditunjuk oleh pointer 'ptr'
        // *ptr mengakses nilai yang ditunjuk oleh pointer, yaitu nilai variabel 'a'
        // printf("%d\n", *ptr); mencetak nilai tersebut diikuti dengan karakter newline
        printf("%d\n", *ptr);  // Menampilkan angka yang saat ini disimpan di variabel 'a'
        
        // Mengurangi nilai yang ditunjuk oleh pointer 'ptr' sebesar 1
        // *ptr mengakses nilai variabel 'a' dan (*ptr)-- mengurangi nilai tersebut sebanyak 1
        // Setelah pengurangan, nilai baru akan disimpan kembali di lokasi yang sama
        (*ptr)--;  // Mengurangi nilai variabel 'a' sebesar 1

    // Kondisi loop do-while
    // Loop akan terus berjalan selama nilai yang ditunjuk oleh pointer 'ptr' lebih besar atau sama dengan 0
    // *ptr mengakses nilai yang disimpan di variabel 'a' dan loop akan berlanjut selama *ptr >= 0
    } while (*ptr >= 0);

    // Mengembalikan 0 dari fungsi main menunjukkan bahwa program telah selesai dengan sukses
    return 0;  // Program selesai tanpa error
}

// Btw gaes, aku harp contoh yg aku kasih masih mudah untuk kalian pahami
// Tapi jika kalian masih, kesulitan jangan sungkan untuk bertanya ya!
// Contoh for loop & do while loop udh, tinggal apa nih yg belum ? while loop ya 
// Next kita contoh ke 3
