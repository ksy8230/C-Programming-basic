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
		printf("\n= %u ��° ���� = \n", times++);
		secret_num = rand() % 100; // 0 - 99

		win = 0;
		k = 1;
		while (k++ <= 7) {
			printf("0���� 99 �� �Է� : ");
			scanf("%u", &guess_num);
			if (guess_num == secret_num) {
				win = 1;
				k = 8;
			}
			else if (guess_num < secret_num) {
				printf("%u���� ū �� �Դϴ�.", guess_num);
			}
			else {
				printf("%u���� ���� �� �Դϴ�.", guess_num);
			}
		}
		if (win) {
			printf("����� �̰���ϴ�.");
		}
		else {
			printf("����� �����ϴ�. %u�����ϴ�.", secret_num);
		}
		printf("�ٽ� �Ͻðڽ��ϱ�? (y/n)");

		getchar();

		replay = getchar(); // y, n �о����
		if (!(replay == 'y' || again == 'Y')) { // y �Ǵ� Y �� �ƴ� ���ڿ��� ��� ����
			again = 0;
		}
	}
	printf("** Game End **");
}
