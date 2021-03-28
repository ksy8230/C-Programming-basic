#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main()
{
	unsigned secret_num, guess_num, k, times = 1;
	unsigned again = 1, win = 0;
	char replay;
	printf("** Game Start **");
	while (again)
	{
		printf("\n= %u 번째 게임 = \n", times++);
		secret_num = rand() % 100; // 0 - 99

		win = 0;
		k = 1;
		while (k++ <= 7) {
			printf("0부터 99 수 입력 : ");
			scanf("%u", &guess_num);
			if (guess_num == secret_num) {
				win = 1;
				k = 8;
			}
			else if (guess_num < secret_num) {
				printf("%u보다 큰 수 입니다.", guess_num);
			}
			else {
				printf("%u보다 작은 수 입니다.", guess_num);
			}
		}
		if (win) {
			printf("당신이 이겼습니다.");
		}
		else {
			printf("당신이 졌습니다. %u였습니다.", secret_num);
		}
		printf("다시 하시겠습니까? (y/n)");

		getchar();

		replay = getchar(); // y, n 읽어들임
		if (!(replay == 'y' || again == 'Y')) { // y 또는 Y 가 아닌 문자열일 경우 종료
			again = 0;
		}
	}
	printf("** Game End **");
}
