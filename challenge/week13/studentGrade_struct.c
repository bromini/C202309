#include <stdio.h>
#include <math.h>

#define MAX_STUDENTS 5 // 최대 학생 수

// 학생 정보를 담는 구조체 
struct Student {
    char name[50];
    int score;
};

// 표본 평균 계산 함수
double calculate_sample_mean(int data[], int num_students) {
    double sample_mean = 0;
    for (int i = 0; i < num_students; i++) {
        sample_mean += data[i];
    }
    return sample_mean / num_students;
}

// 표본 표준편차 계산 함수
double calculate_sample_std_dev(int data[], int num_students, double sample_mean) {
    double sample_std_dev = 0;
    for (int i = 0; i < num_students; i++) {
        sample_std_dev += pow(data[i] - sample_mean, 2);
    }
    return sqrt(sample_std_dev / (num_students - 1));
}

int main() {
    int num_students;
    printf("학생 수를 입력하세요: ");
    scanf_s("%d", &num_students);

    struct Student students[MAX_STUDENTS]; // 학생 정보를 저장할 배열

    // 사용자로부터 각 학생의 이름과 점수를 입력받아 구조체에 저장
    for (int i = 0; i < num_students; i++) {
        printf("학생 %d의 이름과 점수를 입력하세요: ", i + 1);
        scanf_s("%49s %d", students[i].name, sizeof(students[i].name), &students[i].score);
    }

    // 입력 받은 학생 정보 출력
    printf("\n입력 받은 학생 정보:\n");
    for (int i = 0; i < num_students; i++) {
        printf("학생 이름: %s, 점수: %d\n", students[i].name, students[i].score);
    }

    // 입력 받은 학생들의 점수로부터 통계량 계산
    int data[MAX_STUDENTS]; // 학생들의 점수를 저장할 배열
    for (int i = 0; i < num_students; i++) {
        data[i] = students[i].score;
    }

    // 표본 평균 계산
    double sample_mean = calculate_sample_mean(data, num_students);

    // 표본 표준편차 계산
    double sample_std_dev = calculate_sample_std_dev(data, num_students, sample_mean);

    printf("표본 평균: %.2f\n", sample_mean);
    printf("표본 표준편차: %.2f\n", sample_std_dev);

    return 0;
}
