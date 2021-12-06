#include <unistd.h>

int main()
{
    char str[20] = "helloworld";
    int i;

    i = 0;
    while (i < 7)
    {
        write(1, &str[i], 1);
        i += 2;
    }
    return (0);
}