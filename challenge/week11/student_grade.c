#include <stdio.h>

#define STUDENTS 5 // 학생 5명으로 정의

void classifyStudents(int* scores, char targetGrade) {
    printf("학생 성적 분류: \n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) { // 90 이상이면 A
            grade = 'A';
        }
        else if (*(scores + i) >= 80) { // 80 이상이면 B
            grade = 'B';
        }
        else if (*(scores + i) >= 70) { // 70 이상이면 C
            grade = 'C';
        }
        else if (*(scores + i) >= 60) { // 60 이상이면 D
            grade = 'D';
        }
        else { // 그 외는 모두 F로 처리
            grade = 'F';
        }

        if (targetGrade == grade) {
            printf("%d 학생은 %c 점수를 받았습니다\n", i + 1, targetGrade);
        }
    }
}

int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i);
    }
    return sum;
}

double averageScores(int* scores) {
    int sum = sumScores(scores);
    double average = (double)sum / (double)STUDENTS;
    return average;
}

void printRanks(int* scores) {
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1;
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores + j) > *(scores + i)) {
                ranks[i]++;
            }
        }
        printf("%d 학생의 순위는 %d 입니다. \n", i + 1, ranks[i]);
    }
}

int main() {
    // 학생들의 성적을 저장할 배열 선언하기
    int scores[STUDENTS];

    // 학생들의 성적 입력 받기
    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    char ch = getchar(); // 버퍼 임시 저장 변수, 엔터 지우기 위해서

    char target;
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target, 1); // 학생들의 성적 분류 및 출력

    classifyStudents(scores, target);

    int sum = sumScores(scores);
    double average = averageScores(scores);
    printf("학생들의 점수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);

    printRanks(scores);

    return 0;
}
