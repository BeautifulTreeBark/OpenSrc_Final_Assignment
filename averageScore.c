void averageScore(void) {
    printf("평균 점수 계산기\n");

    int how;
    double result = 0.0;

    printf("점수 개수 : ");
    scanf("%d", &how);

    double* data = (double*)calloc(how, sizeof(double));

    for (int i = 0; i < how; i++) {
        printf("%d번쨰 점수 : ", i + 1);
        scanf("%lf", &data[i]);

        result += data[i];
    }

    result /= how;

    printf("데이터 :\n");
    printf("[");
    for (int i = 0; i < how; i++) {
        printf(" %.3f ", data[i]);
    }
    printf("]");

    printf("\n평균 : %.3f", result);

    free(data);
}