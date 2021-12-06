#include <stdio.h>

float average(int length, int array[]); // 사용자 지정 함수를 쓰기 위해 한번 더 언급후 세미콜론

int main(void)
{
	int n; 

	printf("number of scores: ");
	scanf("%i", &n); // 점수갯수를 동적으로 받기 위함

	int scores[n];

	for(int i = 0; i < n; i++)
	{
		printf("score%i: ", i + 1); // i가 0부터이기에 +1을 해줘서 1부터 나오게
		scanf("%i", &scores[i]);	// n이 3이면 scores[0],[1],[2]값 저장
	}
	
	printf("average: %.1f\n", average(n, scores)); // 소수점 첫째자리까지 그 밑으론 반올림 됨 
}

float average(int length, int array[]) // length 배열의 길이, array[] 배열의 값
{
	int sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum += array[i];
	}
	return (float)sum / (float)length;
}
