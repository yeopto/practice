#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char s[5]; 
	char *t = malloc(strlen(s) + 1);

	printf("s: ");
	scanf("%s", s);

	strcpy(t,s);
	t[0] = toupper(t[0]);


	printf("%s\n", s);
	printf("%s\n", t);
	
	free(t);
}
