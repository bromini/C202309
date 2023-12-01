#include <stdio.h>
#include <math.h>

int main() {
    int data[] = { 4300, 4000, 4260, 4020, 3750, 4410, 4520, 4180, 3500, 3460, 3790, 4420, 4450, 3820, 4240 };
    int n = sizeof(data) / sizeof(data[0]);

    // ǥ�� ��� ���
    double sample_mean = 0;
    for (int i = 0; i < n; i++) {
        sample_mean += data[i];
    }
    sample_mean /= n;

    // ǥ�� ǥ������ ���
    double sample_std_dev = 0;
    for (int i = 0; i < n; i++) {
        sample_std_dev += pow(data[i] - sample_mean, 2);
    }
    sample_std_dev = sqrt(sample_std_dev / (n - 1));

    printf("ǥ�� ���: %.2f\n", sample_mean);
    printf("ǥ�� ǥ������: %.2f\n", sample_std_dev);

    return 0;
}
