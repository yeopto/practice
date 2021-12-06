#include <stdio.h> // 10진수 2진수로 바꾸기

int main()
{
	int decimal = 13;
	int binary[20] = { 0, };

	int position = 0;
	while(1)
	{
		binary[position] = decimal % 2;
		decimal = decimal / 2;

		position++;

		if(decimal == 0)
			break;
	}

	for(int i = position - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}

	printf("\n");

	return 0;
}
