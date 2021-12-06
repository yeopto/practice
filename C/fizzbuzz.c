#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1); //""는 주소임 즉 포인터임 스트링선언할때도 포인터선언하고 ""하니까 거기에 인덱스[]를 붙이면
    //배열이라고 생각하면됨 쉽게말해서 char *"0123456"을 선언했다고 생각해보면 이해가능 거기에 str[]처럼 "0123456"[] 이렇게 되는거임 
    //char *str = "0123456"이면 str[0]이 0 "0123456"[0]도 0임 버퍼엔 주소값이 들어가야함
    //그래서 인덱스를 붙여주면 주소값이 아닌 변수값이니까 &붙여준거임
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, &"fizzbuzz"[1], 1);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(number);
		write(1, "\n", 1);
		number++;
	}
}