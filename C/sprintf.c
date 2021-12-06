#include <stdio.h>
#include <string.h>

int main(void)
{
	char names[4][10] = { "EMMA", "RODRIGO", "BRIAN", "DAVID" }; // 2차원 배열로 문자열 4개 10칸씩 초기화

	for(int i = 0; i < 4; i++)
	{
		if(strcmp(names[i], "EMMA") == 0) // EMMA랑 같은지 문자열비교 strcmp 0이면 같다라는 뜻
		{
			printf("Found\n");
			return 0; // 찾으면 0으로 반환해서 끝
		}
	}
	printf("Not Found\n");
	return 1; // 못 찾으면 1로 반환//  else를 쓰면 for문때문에 4번 다 출력됨. 반환값 안적으면 위에서 찾을때도
		  // 출력되고 밑에서도 출력됨 그래서 반환값 적어야 이 코드가 제대로 실행됨. 
}
