#include <stdio.h>

struct test
{
	int age;
	int gender;
	char name[20];
};

int set_human(struct test *a, int age, int gender, const char *name);
char copy_str(char *dest, const char *str);

int main()
{
	struct test human;

	set_human(&human, 10, 1, "Lee"); // "lee"는 밑에 셋휴먼에서 왜 " " 쓰는지 설명함

	printf("Age : %d // Gender : %d // Name : %s\n", human.age, human.gender, human.name);

	return 0;
}

int set_human(struct test *a, int age, int gender, const char *name) // 인자로 구조체 쓰는데 포인터로 해야함
{
	a->age = age; // 첫 age는 구조체 age이고 두번째 age는 인자 age라 다름
	a->gender = gender; // 위와 같음
	copy_str(a->name, name); // name을 정해줄건데 이 함수에 인자가 *name이라 문자열쓸때 " "해줘야함
				// "Lee"를 구조체 네임에다가 복사한다는거임
	return 0;
}

char copy_str(char *dest, const char *src)
{
	while(*src) // 문자열 끝은 널문자 0 // while은 0 되면 반복 종료 
	{
		*dest = *src; // src 주소값 안에(역참조)있는것들을 dest 주소값 안에 할당
		src++; // src는 문자열 첫번째 주소값이기에 포인터연산으로 다음 글자 확인하기
		dest++; // 위와 동일
	}

	*dest = '\0'; // 위에서 반복문이 널문자면 끝나서 0이 복사가 안돼// 그래서 문자열끝을 알리는 널을 입력

	return 1; // 복사완료
}
