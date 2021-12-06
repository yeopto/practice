#include <stdio.h>

void swap(int* a, int* b);

int main(void)
{
	int n;
	printf("받을 정수 갯수: ");
	scanf("%d", &n);

	int m;
	int numbers[n];
	for(int i = 0; i < n; i++)
	{
		printf("수를 입력하시오 : ");
		scanf("%d", &m);
		numbers[i] = m;
	}
	printf("입력 받은 수 : ");
	for(int i = 0; i < n; i++)
	{
		printf("%i", numbers[i]);
	}
	printf("\n");

	for(int j = 0; j < n; j++)
	{
		for(int k = 0; k < (n-1)-j; k++)
		{
			if(numbers[k] > numbers[k+1])
				swap(&numbers[k],&numbers[k+1]);
		}
	}
	printf("정렬된 수 : ");
	for(int l = 0; l < n; l++)
	{
		printf("%i", numbers[l]);
	}
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
