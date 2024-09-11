#include <stdio.h>

// Fungsi untuk menukar dua nilai
void tukar(int *a, int *b) {
    int temp;    // Variabel sementara untuk menyimpan nilai -> tidak harus selalu 'temp', kalian bisa ganti dengan 
                 // nama yg lain misal 'folder' dll. Tapi biasanya 'temp' digunakan untuk menyimpan nilai sementara

    temp = *a;   // Menyimpan nilai dari variabel a
    *a = *b;     // Menukar nilai a dengan b
    *b = temp;   // Menyimpan nilai sementara ke variabel b
}

int main() {
    int x = 5, y = 10;  // Deklarasi dua variabel integer

    // Menampilkan nilai sebelum pertukaran
    printf("Sebelum ditukar: x = %d, y = %d\n", x, y);

    // Memanggil fungsi tukar dan mengirimkan alamat variabel x dan y
    tukar(&x, &y);

    // Menampilkan nilai setelah pertukaran
    printf("Setelah ditukar: x = %d, y = %d\n", x, y);

    return 0;
}

// Ini mirip dengan sorting mungkin ya. kalian memindah nilai A ke varibel B, dan nilai B ke variabel A menggunakan 'temp'
// Oke kita lanjut ke cth ke 3 ya...