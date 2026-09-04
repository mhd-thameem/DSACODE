#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30};
    int length = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < length + 1; i++) {
        printf("Index %d (Address %p): %d\n", i, (void*)(arr + i), *(arr + i));
    }
    return 0;
}