#include <stdio.h>
#include <math.h>

int main() {
    int data[] = { 4300, 4000, 4260, 4020, 3750, 4410, 4520, 4180, 3500, 3460, 3790, 4420, 4450, 3820, 4240 };
    int n = sizeof(data) / sizeof(data[0]);

    // 표본 평균 계산
    double sample_mean = 0;
    for (int i = 0; i < n; i++) {
        sample_mean += data[i];
    }
    sample_mean /= n;

    // 표본 표준편차 계산
    double sample_std_dev = 0;
    for (int i = 0; i < n; i++) {
        sample_std_dev += pow(data[i] - sample_mean, 2);
    }
    sample_std_dev = sqrt(sample_std_dev / (n - 1));

    printf("표본 평균: %.2f\n", sample_mean);
    printf("표본 표준편차: %.2f\n", sample_std_dev);

    return 0;
}
