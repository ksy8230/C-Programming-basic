// practice-04.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int score;
	printf("정수를 입력하세요!");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("%d A", score);
	else if (score >= 80)
		printf("%d B", score);
	else
		printf("%d F", score);
}
