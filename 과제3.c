#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main_scanf(void) {
	int a, b, c;
	double d, x1, x2;

	printf("��� a,b,c �� �Է��Ͻÿ�:");
	scanf("%d%d%d", &a, &b, &c);
	d = b * b - 4.0 * a * c;
	if (d == 0) printf("�߱��Դϴ�.");
	else if (d > 0) {
		x1 = (-b + sqrt(d)) / (2.0 * a);
		x2 = (-b - sqrt(d)) / (2.0 * a);
		printf("ù ��° �Ǳ�= %f\n", x1);
		printf("�� ��° �Ǳ�= %f\n", x2);
	}
	else printf("������Դϴ�.\n");
	
	printf("\n2023��10��4��\n�й�:20234350\n�̸�:������\n������������ �� ����ϱ�(�������ڵ���)");
}

