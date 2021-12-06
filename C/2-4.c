#include <stdio.h>

int main(void)
{
	int n; // 정수 n 할당
   	printf("N을 입력하시오: "); // n 을 입력하시오  
	scanf("%i", &n); // 정수 n 입력

	if(n % 2 == 0) // 2로 나눌때 나머지 0이면 짝수
	{
		printf("even\n");
	}
	else // 그 외엔 홀수
	{
		printf("odd\n");
	}
}
