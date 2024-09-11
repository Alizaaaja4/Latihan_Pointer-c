#include <stdio.h>

// Fungsi untuk menentukan nilai huruf berdasarkan nilai angka
// Parameter:
// - int nilai: Nilai angka yang dimasukkan oleh asisten 
// - char *grade: Pointer ke variabel grade untuk menyimpan nilai huruf yang sesuai
void tentukanNilai(int nilai, char *grade) {
    // Mengecek apakah nilai lebih besar atau sama dengan 80
    // Jika benar, setel nilai yang ditunjuk oleh pointer grade menjadi 'A'
    if (nilai >= 80) {
        *grade = 'A';  // Menetapkan nilai huruf 'A' jika nilai >= 80
    }
    // Mengecek apakah nilai lebih besar atau sama dengan 60 dan kurang dari 80
    // Jika benar, setel nilai yang ditunjuk oleh pointer grade menjadi 'B'
    else if (nilai >= 60) {
        *grade = 'B';  // Menetapkan nilai huruf 'B' jika nilai >= 60 dan < 80
    }
    // Jika tidak memenuhi kedua kondisi di atas, maka nilai harus kurang dari 60
    // Setel nilai yang ditunjuk oleh pointer grade menjadi 'C'
    else {
        *grade = 'C';  // Menetapkan nilai huruf 'C' jika nilai < 60
    }
}

int main() {
    int nilai;     // Variabel untuk menyimpan nilai angka yang dimasukkan oleh 'asisten'
    char grade;    // Variabel untuk menyimpan nilai huruf yang ditentukan

    // Meminta 'asisten' untuk memasukkan nilai angka
    // 'asisten' akan memasukkan nilai yang kemudian akan diproses untuk menentukan grade
    printf("Masukkan nilai angka: ");
    scanf("%d", &nilai);  // Membaca input dari 'asisten' dan menyimpannya dalam variabel nilai

    // Memanggil fungsi tentukanNilai() dengan alamat dari variabel grade
    // Fungsi ini akan menentukan nilai huruf berdasarkan nilai angka yang dimasukkan
    // Pointer digunakan untuk mengubah nilai dari variabel grade secara langsung
    tentukanNilai(nilai, &grade);

    // Menampilkan hasil dari penentuan nilai huruf
    // Menampilkan nilai angka yang dimasukkan dan grade yang ditentukan
    printf("Nilai angka %d mendapatkan grade: %c\n", nilai, grade);

    return 0;  // Mengembalikan 0 untuk menunjukkan bahwa program berhasil dijalankan
}

// Nah gimana, mudahkan untuk menerapkan pointer di kontrol alur 'if-else' dengan fungsi wkwkwk.
// Saya bingun mau kasih contoh apa, jadi modul 3 dan 5 saya gabung aja wkwkwk
// Kita akan lanjut ke contoh 2, jika kita ingin menggunakan 'strcmp'