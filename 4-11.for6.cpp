#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int i, j;
	float m, k;
	k = 26;
	for (i = 65; i <= 90; i++) { // A ~ Z 아스키코드값: 65 ~ 90
		for (m = k; m >= 0; m--) { // 왼쪽부터 26칸 띄고 출력
			printf(" ");
		}
		k = k - 1; // 1칸씩 줄이기
		for (j = 65; j <= i; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
}
