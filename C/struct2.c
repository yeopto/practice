#include <stdio.h>

char    *strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

typedef struct student
{
    int idnum;
    char name[10];
    char phone[13];
    int kor;
    int eng;
    int math;
} Student;

int main()
{
    Student yeop;

    yeop.idnum = 4242;
    yeop.name[0] = 'y'; //name그자체는 배열 이름이라 포인터다. 상수임. 배열 선언하면서 문자열을 같이 선언하는건 되지만 이미 선언후에 name은 상수라 변할수가 없어서 안됨
    yeop.name[1] = 'e'; //즉 yeop.name = "ye" 이건 안돼. 하지만 배열 인덱스 하나하나 선언해주는건 가능 name은 상수지만 name[0]은 변수이기때문
    //만약 구조체에서 char *name이렇게 선언했다면 name은 포인터변수라 따로 선언해줘도 됨. 즉 yeop.name = "ye"가 가능.
    strcpy(yeop.phone, "01092875048"); // 그래서 배열로 선언되어있는 문자열을 처리하려면 strcpy를 써준다 strcpy의 파라미터를 보면 const char *인데 이러한 이유때문인거같음 
    //포인터가 가리키는 위치를 받아서 그 위치에서 한칸식 이동하면서 복사하는거라 포인터자체가 변하는게 아님.
    yeop.kor = 40;
    yeop.eng = 50;
    yeop.math = 60;

    printf("%d %s %s %d %d %d\n", yeop.idnum, yeop.name, yeop.phone, yeop.kor, yeop.eng, yeop.math);

    return (0);
}