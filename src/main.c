//
// Created by arkvaer on 2025/6/30.
//
#include <stdio.h>
#include <stdlib.h>

void malloc_test();

void malloc_test1();

void str_test();


int main() {
    // malloc_test();
    // malloc_test1();

    str_test();
    return 0;
}


void malloc_test1() {
    void *p;
    int cnt = 0;
    while ((p = malloc(100 * 1024 * 1024))) {
        cnt++;
    }
    printf("malloc %d00MB, ", cnt);
    // free(p);
}

void malloc_test() {
    int *m = malloc(10 * sizeof(int));
    for (int index = 0; index < 10; ++index) {
        m[index] = index * 2;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d\t", m[i]);
    }
    printf("\n");

    free(m);
    int a[] = {0, 1, 2, 2, 3};
    int *p = &a[0];
    *p = 100;
    size_t n = sizeof(a) / sizeof(a[0]);
    for (size_t i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n======\n");
}

void str_test() {
    const auto s = "hello world";
    const auto s1 = "hello world";
    printf("%p\n", s);
    printf("%p\n", s1);
    printf("%s\n", s);
    char a[][4] = {
        "hello",
        "world"
    };
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}
