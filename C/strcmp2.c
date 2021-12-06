#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char str1[20];
    char str2[20];

    scanf("%s", str1);
    scanf("%s", str2);

    if (ft_strcmp(str1, str2) == 0)
    {
        printf("같은문장\n");
    }
    else
    {
        printf("다른문장\n");
    }
    return (0);
}