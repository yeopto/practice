#include <stdio.h>

int main()
{
    FILE *fp = fopen("a.txt","w");

    fprintf(fp, "hihi\n");

    fclose(fp);
    
    return (0);
}
