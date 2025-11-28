#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// ===== ?¨ìˆ˜ ? ì–¸ =====
void unitConverter(); // solved
void calculator();
void averageScore();
void stringCaseConverter();
void generateRandomPassword();

int main() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf("         ë©”ë‰´ ? íƒ \n");
        printf("==============================\n");
        printf("1. ?¨ìœ„ ë³€?˜ê¸°\n");
        printf("2. ê°„ë‹¨ ê³„ì‚°ê¸?(?¬ì¹™?°ì‚°)\n");
        printf("3. ?ìˆ˜ ?‰ê·  ê³„ì‚°\n");
        printf("4. ë¬¸ì???€/?Œë¬¸??ë³€??n");
        printf("5. ?œë¤ ë¹„ë?ë²ˆí˜¸ ?ì„±\n");
        printf("0. ?„ë¡œê·¸ë¨ ì¢…ë£Œ\n");
        printf("==============================\n");
        printf("ë©”ë‰´ ë²ˆí˜¸ë¥??…ë ¥?˜ì„¸?? ");
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
            printf("?„ë¡œê·¸ë¨??ì¢…ë£Œ?©ë‹ˆ??\n");
            exit(0);
        default:
            printf("?˜ëª»???…ë ¥?…ë‹ˆ?? ?¤ì‹œ ? íƒ?˜ì„¸??\n");
        }
    }
    return 0;
}
