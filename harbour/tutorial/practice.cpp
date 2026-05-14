#include <stdio.h>

int main() {
    int Y = 10, Z = 20;
    int *P, *Q;

    P = &Y;
    Q = &(*P);

    *Q = 30;

    printf("%d\n", Y); // 30
    printf("%d\n", Z);
    printf("%d\n", *P); // 30
    printf("%d\n", *Q); // 30
    printf("%p\n", Q); // 0x16db3ec58
    printf("%p\n", P);

    return 0;
}