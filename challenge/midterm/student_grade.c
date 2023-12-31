#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

// 학생 별 평균 점수를 계산하고 출력하는 함수
void printStudentAverage(double studentScores[STUDENTS][SUBJECTS], char studentNames[STUDENTS][CHARNUM]) {
    printf("--------------------\n");
    printf("학생 별 성적은 다음과 같습니다 \n");

    for (int i = 0; i < STUDENTS; i++) {
        double totalScore = 0.0;
        for (int j = 0; j < SUBJECTS; j++) {
            totalScore += studentScores[i][j];
        }
        double finalScore = totalScore / SUBJECTS;
        printf("\t%s의 평균 점수: %.2lf\n", studentNames[i], finalScore);
    }
}

// 과목 별 평균 점수를 계산하고 출력하는 함수
void printSubjectAverage(double studentScores[STUDENTS][SUBJECTS], char subjectNames[SUBJECTS][CHARNUM]) {
    printf("--------------------\n");
    printf("과목 별 평균 점수는 아래와 같습니다. \n");

    for (int i = 0; i < SUBJECTS; i++) {
        double subjectScore = 0.0;
        for (int j = 0; j < STUDENTS; j++) {
            subjectScore += studentScores[j][i];
        }
        double avgSubjectScore = subjectScore / STUDENTS;
        printf("\t%s의 평균 점수는 %.2lf 입니다.\n", subjectNames[i], avgSubjectScore);
    }
}

int main() {
    // 학생 및 과목 정보를 저장하는 배열들
    char subjectNames[SUBJECTS][CHARNUM] = { "퀴즈", "중간고사", "기말고사" };
    char studentNames[STUDENTS][CHARNUM] = { "" };
    double studentScores[STUDENTS][SUBJECTS] = { 0.0 };

    // 학생 이름 입력 받기
    printf("학생 %d명의 이름의 입력을 시작합니다. \n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d번째 학생의 이름을 입력하세요: ", i + 1);
        scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
    }

    // 입력된 학생 이름 출력
    printf("학생 이름이 모두 입력되었습니다. \n");
    printf("입력된 학생 이름은 다음과 같습니다. \n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s", studentNames[i]);
        if (i != STUDENTS - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("--------------------\n");

    // 각 학생의 시험 점수 입력 받기
    printf("각 학생의 %s, %s, %s 점수를 차례대로 입력해주세요. (띄어쓰기 구분)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s의 성적:", studentNames[i]);
        for (int j = 0; j < SUBJECTS; j++) {
            scanf_s("%lf", &studentScores[i][j]);
        }
    }

    printf("학생들의 시험 점수가 모두 입력 되었습니다.\n");

    // 학생 별 평균 점수 출력 함수 호출
    printStudentAverage(studentScores, studentNames);

    // 과목 별 평균 점수 출력 함수 호출
    printSubjectAverage(studentScores, subjectNames);

    printf("프로그램을 종료합니다. ");
    return 0;
}
