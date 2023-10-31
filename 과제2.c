#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_printf(void)
{
	int day;

	printf("요일을 0(일요일)에서 6까지의 정수로 입력하시오:");
	scanf("%d", &day);

	if (day > 0 && day < 6) printf("주중입니다.");
	else if (day = 0) printf("주말입니다.");
	else if (day = 6) printf("주말입니다.");

	printf("\n2023년10월4일 20234350 김현수\n\n0에서6까지의 정수를 입력받고 주말인지 주중인지 출력하는 프로그램\n");

}
