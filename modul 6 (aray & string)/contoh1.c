#include <stdio.h>

int main() {
    // Mendefinisikan array string yang berisi nama-nama mahasiswa.
    // Array ini berisi beberapa elemen, di mana setiap elemen adalah pointer ke sebuah string (nama mahasiswa).
    // Array 'mahasiswa' terdiri dari empat elemen, yaitu pointer ke string literal.
    char *mahasiswa[] = {
        "Alice",    // Nama mahasiswa pertama
        "Bob",      // Nama mahasiswa kedua
        "Charlie",  // Nama mahasiswa ketiga
        "Diana"     // Nama mahasiswa keempat
    };
    
    // Menghitung jumlah elemen dalam array 'mahasiswa'.
    // 'sizeof(mahasiswa)' memberikan ukuran total array dalam byte.
    // 'sizeof(mahasiswa[0])' memberikan ukuran satu elemen array (pointer ke char) dalam byte.
    // Dengan membagi ukuran total array dengan ukuran satu elemen, kita mendapatkan jumlah elemen dalam array.
    int jumlahMahasiswa = sizeof(mahasiswa) / sizeof(mahasiswa[0]);

    // Mendeklarasikan pointer 'ptr' yang akan digunakan untuk iterasi melalui array 'mahasiswa'.
    // 'ptr' adalah pointer ke pointer char (char **), yang berarti ia dapat menunjuk ke elemen array 'mahasiswa'.
    char **ptr;

    // Menampilkan daftar nama mahasiswa ke layar.
    // 'printf' digunakan untuk mencetak string ke layar.
    // Judul 'Daftar Nama Mahasiswa:' dicetak terlebih dahulu.
    printf("Daftar Nama Mahasiswa:\n");
    
    // Memulai loop untuk mengiterasi melalui array 'mahasiswa'.
    // 'ptr' diinisialisasi dengan alamat awal array 'mahasiswa'.
    // Loop berlanjut sampai 'ptr' menunjuk di luar batas array, yaitu sampai 'ptr' mencapai alamat setelah elemen terakhir.
    for (ptr = mahasiswa; ptr < mahasiswa + jumlahMahasiswa; ptr++) {
        // 'printf' digunakan untuk mencetak nama mahasiswa yang ditunjuk oleh pointer 'ptr'.
        // '*ptr' mengakses elemen yang ditunjuk oleh pointer 'ptr', yaitu string nama mahasiswa.
        // Nama mahasiswa dicetak di layar diikuti dengan baris baru.
        printf("%s\n", *ptr);
    }

    return 0; // Keluar dari program dengan kode sukses (0).
}

// Ini salah satu contoh sederhana yg terbayang di kepala saya wkwkw
// Mungkin contoh selanjutnya, kita coba pake inputan. Biar makin terlihat case asli nya