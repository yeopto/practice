#include <stdio.h> // 문자열 대문자 바꾸기
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[10];
	
	printf("input : ");
	scanf("%s", s);
	printf("output : ");
	for(int i = 0; i < strlen(s); i++)
	{
		printf("%c", toupper(s[i]));
	}
	printf("\n");
}
