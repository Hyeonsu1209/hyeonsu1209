#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main_scanf(void) {
	int a, b, c;
	double d, x1, x2;

	printf("계수 a,b,c 를 입력하시오:");
	scanf("%d%d%d", &a, &b, &c);
	d = b * b - 4.0 * a * c;
	if (d == 0) printf("중근입니다.");
	else if (d > 0) {
		x1 = (-b + sqrt(d)) / (2.0 * a);
		x2 = (-b - sqrt(d)) / (2.0 * a);
		printf("첫 번째 실근= %f\n", x1);
		printf("두 번째 실근= %f\n", x2);
	}
	else printf("허수근입니다.\n");
	
	printf("\n2023년10월4일\n학번:20234350\n이름:김현수\n이차방정식의 근 계산하기(교과서코드사용)");
}

