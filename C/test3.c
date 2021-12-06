#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int *b = (int *)malloc(sizeof(int));

    printf("%lu %lu", sizeof(a), sizeof(*b));

    return (0);
}