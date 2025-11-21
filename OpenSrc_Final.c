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