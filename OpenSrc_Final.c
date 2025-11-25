#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// ===== 함수 선언 =====
void unitConverter();
void calculator();
void averageScore();
void stringCaseConverter();
void generateRandomPassword();

int main() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf("         메뉴 선택 \n");
        printf("==============================\n");
        printf("1. 단위 변환기\n");
        printf("2. 간단 계산기 (사칙연산)\n");
        printf("3. 점수 평균 계산\n");
        printf("4. 문자열 대/소문자 변환\n");
        printf("5. 랜덤 비밀번호 생성\n");
        printf("0. 프로그램 종료\n");
        printf("==============================\n");
        printf("메뉴 번호를 입력하세요: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            unitConverter();
            break;
        case 2:
            calculator();
            break;
        case 3:
            averageScore();
            break;
        case 4:
            stringCaseConverter();
            break;
        case 5:
            generateRandomPassword();
            break;
        case 0:
            printf("프로그램을 종료합니다.\n");
            exit(0);
        default:
            printf("잘못된 입력입니다. 다시 선택하세요.\n");
        }
    }
    return 0;
}
//비밀번호 생성기
void shuffle(char* array, int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}

void generateRandomPassword() {
    int length;
    printf("비밀번호 길이 입력: ");
    if (scanf("%d", &length) != 1) {
        printf("잘못된 입력\n");
        return;
    }

    if (length < 4) {
        printf("비밀번호 최소 4자 이상\n");
        return;
    }

    const int MAX_LEN = 1024;
    if (length > MAX_LEN) {
        printf("너무 긺 최대 %d자로 제한.\n", MAX_LEN);
        length = MAX_LEN;
    }

    const char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char lower[] = "abcdefghijklmnopqrstuvwxyz";
    const char digit[] = "0123456789";
    const char special[] = "!@#$%^&*()-_=+";
    const char allChars[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()-_=+";

    int upperSize = sizeof(upper) - 1;
    int lowerSize = sizeof(lower) - 1;
    int digitSize = sizeof(digit) - 1;
    int specialSize = sizeof(special) - 1;
    int allSize = sizeof(allChars) - 1;

    char* password = (char*)malloc((size_t)length + 1);
    if (!password) {
        printf("메모리 할당 실패\n");
        return;
    }

    int idx = 0;
    password[idx++] = upper[rand() % upperSize];
    password[idx++] = lower[rand() % lowerSize];
    password[idx++] = digit[rand() % digitSize];
    password[idx++] = special[rand() % specialSize];

    for (int i = idx; i < length; i++) {
        password[i] = allChars[rand() % allSize];
    }

    shuffle(password, length);
    password[length] = '\0';

    printf("생성된 비밀번호: %s\n", password);

    free(password);
}
//비밀번호 생성기