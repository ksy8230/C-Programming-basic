#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int i, j;
	float m, k;
	k = 26;
	for (i = 65; i <= 90; i++) { // A ~ Z �ƽ�Ű�ڵ尪: 65 ~ 90
		for (m = k; m >= 0; m--) { // ���ʺ��� 26ĭ ��� ���
			printf(" ");
		}
		k = k - 1; // 1ĭ�� ���̱�
		for (j = 65; j <= i; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
}
