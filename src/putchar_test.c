#include <stdio.h>
//
// Created by zhangchengtao on 2025/7/1.
//
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; ++i) {
        printf("%s ", argv[i]);
    }
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    printf("EOF!");
    return 0;
}
