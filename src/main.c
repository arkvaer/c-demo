//
// Created by arkvaer on 2025/6/30.
//
#include <stdio.h>

int main() {
    int a[] = {0, 1, 2, 2, 3};
    const auto p = &a[0];
    *p = 100;
    size_t n = sizeof(a) / sizeof(a[0]);
    for (size_t i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n======\n");

    int i1 = *(a + 5);
    printf("%d\n", a+2 == &a[2]);
    printf("%d\n", i1 == 0);

    return 0;
}

