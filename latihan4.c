#include <stdio.h>
#include <stdlib.h>

struct mahasiswa{
    char nama[50];
    int nim;
    float nilai;
};

int main (){
    struct mahasiswa *mhs;

    mhs = (struct mahasiswa*) malloc(sizeof(struct mahasiswa));

    if (mhs == NULL){
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    // inputan user
    printf("Input nama: "); scanf("%49s", mhs->nama);
    printf("Input NIM: "); scanf("%d", &mhs->nim);
    printf("Input nilai: "); scanf("%f", &mhs->nilai);

    // outout terminal
    printf("\n=Ouput=\n");
    printf("Nama: %s\n", mhs->nama);
    printf("NIM: %d\n", mhs->nim);
    printf("Nilai: %.2f\n", mhs->nilai);

    free(mhs);

    return 0;

}
