// practice-04.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int score;
	printf("������ �Է��ϼ���!");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("%d A", score);
	else if (score >= 80)
		printf("%d B", score);
	else
		printf("%d F", score);
}
