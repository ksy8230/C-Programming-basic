#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i = i + 1) {
		if (i % 2) { // 나머지 1이면 아래 연산
			sum = sum + i;
		}
	}
	printf("1부터 100까지 합: %d", sum);
}
