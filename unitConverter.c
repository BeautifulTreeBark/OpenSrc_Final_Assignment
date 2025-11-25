#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define KM_TO_MILE 0.621371
#define MILE_TO_KM 1.60934

#define CM_TO_INCH 0.393701
#define INCH_TO_CM 2.54


void unitConverter() {
    int sub_choice;
    double value, result;

    while (1) {
        printf("\n--- 단위 변환기 (거리) ---\n");
        printf("1. KM -> MILE 변환\n");
        printf("2. MILE -> KM 변환\n");
        printf("3. CM -> INCH 변환\n");
        printf("4. INCH -> CM 변환\n");
        printf("0. 이전 메뉴로 돌아가기\n");
        printf("--------------------------\n");
        printf("변환 메뉴 번호를 입력하세요: ");

        if (scanf_s("%d", &sub_choice) != 1) {
            printf("잘못된 입력입니다. (숫자를 입력해주세요)\n");
            while (getchar() != '\n');
            continue;
        }

        if (sub_choice == 0) {
            printf("이전 메뉴로 돌아갑니다.\n");
            break;
        }

        if (sub_choice >= 1 && sub_choice <= 4) {
            printf("변환할 값을 입력하세요: ");
            if (scanf_s("%lf", &value) != 1) {
                printf("잘못된 입력입니다. (숫자를 입력해주세요)\n");
                while (getchar() != '\n');
                continue;
            }

            switch (sub_choice) {
            case 1:
                result = value * KM_TO_MILE;
                printf("%.2f KM는 %.2f MILE 입니다.\n", value, result);
                break;
            case 2:
                result = value * MILE_TO_KM;
                printf("%.2f MILE는 %.2f KM 입니다.\n", value, result);
                break;
            case 3:
                result = value * CM_TO_INCH;
                printf("%.2f CM는 %.2f INCH 입니다.\n", value, result);
                break;
            case 4:
                result = value * INCH_TO_CM;
                printf("%.2f INCH는 %.2f CM 입니다.\n", value, result);
                break;
            }
        } else {
            printf("잘못된 옵션 입니다. 다시 선택해주세요.\n");
        }
    }
}