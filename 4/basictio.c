#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int dec = 30, oct = 012, hex = 0x5E;
	printf("�� ���� ������ ���� ������ ���� �Է��ϼ���. ");
	pritnf("������ - ������ - ��������\n");

	scanf("%d - %o - %x", &dec, &oct, &hex);
	printf("\n�Է��� ���� ������ �����ϴ�.\n");
	printf("%d - %o -%x\n", dec, oct, hex);
	pritnf("%d - %d -%d\n", dec, oct, hex);

	return 0;
}