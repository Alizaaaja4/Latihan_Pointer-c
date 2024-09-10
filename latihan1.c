#include <stdio.h>

int main()
{
    int a = 10;
    int *cek = &a;  // Deklarasi pointer ptr yang menunjuk ke a
    printf("%p", *cek);  // Output: 10

    // int arr[3] = {1, 2, 3};
    // int *ptr = arr;
    // printf("%d", *(ptr + 1)); // Output: 2

    // int a = 10;
    // int *ptr = &a;
    // int **pptr = &ptr;
    // printf("%d", **pptr); // Output: 10

    // int *ptr = NULL;
    // if (ptr == NULL)
    // {
    //     printf("Pointer is null");
    // }

    return 0;
}
