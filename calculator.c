#include <stdio.h>

int calculator(void)
{
	int menu, num1, num2;

	printf("계산기\n");

	while (1)
	{
		printf("\n<MENU>\n");
		printf("-------------------------\n");
		printf("[1] 더하기\n[2] 빼기\n[3] 곱셈\n[4] 나눗셈\n[0] 종료\n");
		printf("-------------------------\n");
		printf("계산 방법 선택 :");
		scanf("%d", &menu);

		switch (menu)
		{
		case 0:
			printf("종료합니다.\n");
			return 0;
		case 1:
			printf("두 숫자를 입력하세요 : ");
			scanf("%d %d", &num1, &num2);
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
			break;
		case 2:
			printf("두 숫자를 입력하세요 : ");
			scanf("%d %d", &num1, &num2);
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
			break;
		case 3:
			printf("두 숫자를 입력하세요 : ");
			scanf("%d %d", &num1, &num2);
			printf("%d x %d = %d \n", num1, num2, num1 * num2);
			break;
		case 4:
			printf("두 숫자를 입력하세요 : ");
			scanf("%d %d", &num1, &num2);
			if (num2 == 0)
			{
				printf(" 0으로 나눌 수 없습니다.");
			}
			else
			{
				printf("%d / %d = %d ...%d\n", num1, num2, num1 / num2, num1%num2);
			}
			break;
		default:
			printf("다시 입력하세요.\n");
			break;
		}
	}
}
