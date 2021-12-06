#include <stdio.h>
// 프로토타입
int compare(char *str1, char *str2);
int add_book(char (*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int *borrowed, int *num_total_book);
int search_book(char (*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int num_total_book);
int borrow_book(int *borrowed);
int return_book(int *borrowed);
// 프로토타입

int main()
{
	int user_choice;
	int num_total_book = 0; // 총 책의 개수

	char book_name[100][30], auth_name[100][30], publ_name[100][30]; // 2차원 배열 100권에 이름 30자씩

	int borrowed[100]; // 빌려진 책인지 아닌지 확인 해보기 위해 변수만들어주고 값이 1이면 빌린거 0이면 안빌린것 

	while(1)
	{
		printf("도서 관리 프로그램\n");
		printf("메뉴를 선택하세요\n");
		printf("1. 책을 새로 추가하기\n");
		printf("2. 책을 검색하기\n");
		printf("3. 책을 빌리기\n");
		printf("4. 책을 반납하기\n");
		printf("5. 프로그램 종료\n");

		printf("당신의 선택은 : ");
		scanf("%d", &user_choice);
		if(user_choice == 1)
		{
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book);
		}
		else if(user_choice == 2)
		{
			search_book(book_name, auth_name, publ_name, num_total_book);
		}
		else if(user_choice == 3)
		{
			borrow_book(borrowed);
		}
		else if(user_choice == 4)
		{
			return_book(borrowed);
		}
		else if(user_choice == 5)
		{
			break;
		}
	}

	return 0;
}

int compare(char *str1, char *str2)
{
	while(*str1) // 문자열 끝까지 반복. 널문자가면 종료 되니까.
	{
		if(*str1 != *str2) // 문자열 내의 값이 다르면 0(거짓)을 반환. 즉, compare했을때 0
		{
			return 0;
		}
		
		str1++; //비교 대상 한글자씩 이동
		str2++; //비교 대상 한글자씩 이동
	}
	
	if(*str2 == '\0') return 1; // 위에 것만 돌리면 str1이 abc고 str2는 abcd면 다른데 같다고 인식
			            // 그래서 다 돌렸는데 str2가 이제 \0 널문자를 가르키면 같은거기 때문에 1(참)을 
				    // 반환한다

	return 0; //그렇지 않으면 0(거짓) 반환
}

int add_book(char (*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int *borrowed, int *num_total_book)
{
	printf("추가할 책의 제목 : ");
	scanf("%s", book_name[*num_total_book]);

	printf("추가할 책의 저자 : ");
	scanf("%s", auth_name[*num_total_book]);

	printf("추가할 책의 출판사 : ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0;
	printf("추가 완료\n");
	(*num_total_book)++;

	return 0;
}

int search_book(char (*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int num_total_book)
{
	int user_input;
	int i;
	char user_search[30];

	printf("어느 것으로 검색 할 것인가요?\n");
	printf("1. 책 제목 검색\n");
	printf("2. 지은이 검색\n");
	printf("3. 출판사 검색\n");
	scanf("%d", &user_input);

	printf("검색할 단어를 입력하세요 : ");
	scanf("%s", user_search);
	
	printf("검색 결과\n");
	
	if(user_input == 1)
	{
		for(i = 0; i < num_total_book; i++)
		{
			if(compare(book_name[i], user_search))
			{
				printf("번호 : %d // 책이름 : %s // 지은이 : %s // 출판사 %s\n", i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if(user_input == 2)
	{
		for(i = 0; i < num_total_book; i++)
		{
			if(compare(auth_name[i], user_search))
			{
				printf("번호 : %d // 책이름 : %s // 지은이 : %s // 출판사 %s\n", i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if(user_input == 3)
	{
		for(i = 0; i < num_total_book; i++)
		{
			if(compare(publ_name[i], user_search))
			{
				printf("번호 : %d // 책이름 : %s // 지은이 : %s // 출판사 %s\n", i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}

	return 0;
}

int borrow_book(int *borrowed)
{
	int book_num;

	printf("빌릴 책의 번호를 말해주세요\n");
	printf("책 번호 : ");
	scanf("%d", &book_num);

	if(borrowed[book_num] == 1)
	{
		printf("이미 대출된 책입니다!\n");
	}
	else
	{
		printf("책이 성공적으로 대출되었습니다\n");
		borrowed[book_num] = 1;
	}

	return 0;
}

int return_book(int *borrowed)
{
	int book_num;

	printf("반납할 책의 번호를 말해주세요\n");
	printf("책 번호 : ");
	scanf("%d", &book_num);

	if(borrowed[book_num] == 0)
	{
		printf("이미 반납되어 있습니다.\n");
	}
	else
	{
		borrowed[book_num] = 1;
		printf("성공적으로 반납되었습니다.\n");
	}

	return 0;
}
