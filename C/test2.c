#include <stdio.h>

void main()
{
    int a = 3;
    int *b;
    int **c;

    b = &a;
    c = &b;

    printf("%p\n", &a);
    printf("%p\n", b);
    printf("%p\n", *c);
    printf("%p\n", &b);
    printf("%p\n", c);
    printf("%d\n", *(*c));
}