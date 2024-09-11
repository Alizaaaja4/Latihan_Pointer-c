#include <stdio.h>
#include <string.h>  // Untuk fungsi strcmp

// Fungsi untuk menentukan apakah input adalah "ya" atau "tidak"
// Parameter:
// - char *input: Pointer ke string yang menyimpan input asisten
// - char *hasil: Pointer ke string di mana hasil keputusan akan disimpan
void tentukanRespon(const char *input, char *hasil) {
    // Membandingkan string input dengan string "ya" dan "tidak" menggunakan if-else
    if (strcmp(input, "ya") == 0) {
        strcpy(hasil, "Anda memilih ya.");  // Menyimpan hasil jika input adalah "ya"
    } else if (strcmp(input, "tidak") == 0) {
        strcpy(hasil, "Anda memilih tidak.");  // Menyimpan hasil jika input adalah "tidak"
    } else {
        strcpy(hasil, "Pilihan tidak dikenali.");  // Menyimpan hasil jika input tidak dikenali
    }
}

int main() {
    char input[50];  // Array untuk menyimpan input asisten
    char hasil[50];  // Array untuk menyimpan hasil keputusan

    // Meminta input dari asisten
    printf("Masukkan respon (ya/tidak): ");
    gets(input);  // Membaca input asisten (Tidak aman sih, hanya untuk tujuan belajar masih oke)

    // Menentukan respon berdasarkan input yang dimasukkan
    tentukanRespon(input, hasil);

    // Menampilkan hasil keputusan
    printf("%s\n", hasil);

    return 0;
}

// Gimana gaes, mudah kan modul 3 dan 5. Gak perlu yg sulit dulu tapi basic aja udh cukup.
// Btw kalian bisa, coba case nya jadi login kok atau mungkin quiz kali ya
// Coba aja, untuk test pemahaman kalian :)
// Selanjutnya, kita akan lanjut ke contoh ke 3 menggunakan switch-case