#include <stdio.h>

int bignum(int num1, int num2)
{
	if(num1>=num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

int main(void)
{
	int result;

	result = bignum(3,5);
	printf("%d\n", result);
}
