#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int op_num1, op_num2;
	char op;
	printf("���� ���α׷�");
	printf("������ �Է� + - * / : ");
	scanf("%c", &op);

	printf("%c�� �ǿ����� 1 �Է� : ", op);
	scanf("%d", &op_num1);
	printf("%c�� �ǿ����� 2 �Է� : ", op);
	scanf("%d", &op_num2);

	switch (op) {
	case '+':
		printf("%d + %d = %d", op_num1, op_num2, op_num1 + op_num2);
		break;
	default:
		printf("�߸��� �����Դϴ�");
	}
}
