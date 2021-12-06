#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[3] = "ap"; // 길이 3 문자열 "ap" 할당 a,p,\0

	printf("%p\n", s); // s자체는 s[0]의 주소값
	printf("%c\n", s[0]); // a
	printf("%c\n", s[1]); // p
	printf("%c\n", s[2]); // null
	printf("%s\n", s); // %s라 문자열 출력
	printf("%c\n", *s); // s[0]의 값 a 
	printf("%c\n", *(s + 1)); // s에서 char크기 1바이트만큼 옆에 있는 주소 안의 값 p
	printf("%p\n", &s[0]); // s의 주소값과 같다
}
