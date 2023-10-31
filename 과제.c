#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_hi(void)
{
	char point;

	printf("학점을 입력하시오:");
	scanf("%c", &point);

	switch (point)

	{

	case 'A':   printf("아주잘했어요.");
		     break;
	case 'B':   printf("좋습니다.");
		     break;
	case 'C':   printf("만족스럽습니다.");
		     break;
	case 'D':   printf("더노력해보세요.");
		     break;
	case 'F':   printf("안타깝습니다.");
		     break;
	
	}

	printf("\n2023년10월4일 20234350 김현수\n");
	

}