#include <stdio.h>
#include <math.h>

#define MAX_STUDENTS 5 // �ִ� �л� ��

// �л� ������ ��� ����ü 
struct Student {
    char name[50];
    int score;
};

// ǥ�� ��� ��� �Լ�
double calculate_sample_mean(int data[], int num_students) {
    double sample_mean = 0;
    for (int i = 0; i < num_students; i++) {
        sample_mean += data[i];
    }
    return sample_mean / num_students;
}

// ǥ�� ǥ������ ��� �Լ�
double calculate_sample_std_dev(int data[], int num_students, double sample_mean) {
    double sample_std_dev = 0;
    for (int i = 0; i < num_students; i++) {
        sample_std_dev += pow(data[i] - sample_mean, 2);
    }
    return sqrt(sample_std_dev / (num_students - 1));
}

int main() {
    int num_students;
    printf("�л� ���� �Է��ϼ���: ");
    scanf_s("%d", &num_students);

    struct Student students[MAX_STUDENTS]; // �л� ������ ������ �迭

    // ����ڷκ��� �� �л��� �̸��� ������ �Է¹޾� ����ü�� ����
    for (int i = 0; i < num_students; i++) {
        printf("�л� %d�� �̸��� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%49s %d", students[i].name, sizeof(students[i].name), &students[i].score);
    }

    // �Է� ���� �л� ���� ���
    printf("\n�Է� ���� �л� ����:\n");
    for (int i = 0; i < num_students; i++) {
        printf("�л� �̸�: %s, ����: %d\n", students[i].name, students[i].score);
    }

    // �Է� ���� �л����� �����κ��� ��跮 ���
    int data[MAX_STUDENTS]; // �л����� ������ ������ �迭
    for (int i = 0; i < num_students; i++) {
        data[i] = students[i].score;
    }

    // ǥ�� ��� ���
    double sample_mean = calculate_sample_mean(data, num_students);

    // ǥ�� ǥ������ ���
    double sample_std_dev = calculate_sample_std_dev(data, num_students, sample_mean);

    printf("ǥ�� ���: %.2f\n", sample_mean);
    printf("ǥ�� ǥ������: %.2f\n", sample_std_dev);

    return 0;
}
