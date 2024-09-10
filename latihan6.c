#include <stdio.h>

int main (){
    int a = 0;
    int *cek = &a;

    for (; *cek <= 10; (*cek)++){
        printf("%d\n", *cek);
    }

    return 0;
}
