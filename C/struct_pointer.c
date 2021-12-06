#include <stdio.h>

typedef struct student
{
	int idnum;
	int kor;
	int eng;
	int math;
}Student;

void setstudent(Student *std, int kor, int eng, int math)
{
	std -> kor = kor;
	std -> eng = eng;
	std -> math = math;
}

void main()
{
	Student A;
	setstudent(&A, 80, 70, 60);

	printf("%d %d %d\n", A.kor, A.eng, A.math);
}