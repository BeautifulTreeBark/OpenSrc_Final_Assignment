#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// ===== �Լ� ���� =====
void unitConverter(); // solved
void calculator();
void averageScore();
void stringCaseConverter();
void generateRandomPassword();

int main() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf("         �޴� ���� \n");
        printf("==============================\n");
        printf("1. ���� ��ȯ��\n");
        printf("2. ���� ���� (��Ģ����)\n");
        printf("3. ���� ��� ���\n");
        printf("4. ���ڿ� ��/�ҹ��� ��ȯ\n");
        printf("5. ���� ��й�ȣ ����\n");
        printf("0. ���α׷� ����\n");
        printf("==============================\n");
        printf("�޴� ��ȣ�� �Է��ϼ���: ");
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
            printf("���α׷��� �����մϴ�.\n");
            exit(0);
        default:
            printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
        }
    }
    return 0;
}
