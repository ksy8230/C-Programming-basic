#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i = i + 1) {
		if (i % 2) { // ������ 1�̸� �Ʒ� ����
			sum = sum + i;
		}
	}
	printf("1���� 100���� ��: %d", sum);
}
