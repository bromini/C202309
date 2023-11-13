#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

// �л� �� ��� ������ ����ϰ� ����ϴ� �Լ�
void printStudentAverage(double studentScores[STUDENTS][SUBJECTS], char studentNames[STUDENTS][CHARNUM]) {
    printf("--------------------\n");
    printf("�л� �� ������ ������ �����ϴ� \n");

    for (int i = 0; i < STUDENTS; i++) {
        double totalScore = 0.0;
        for (int j = 0; j < SUBJECTS; j++) {
            totalScore += studentScores[i][j];
        }
        double finalScore = totalScore / SUBJECTS;
        printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);
    }
}

// ���� �� ��� ������ ����ϰ� ����ϴ� �Լ�
void printSubjectAverage(double studentScores[STUDENTS][SUBJECTS], char subjectNames[SUBJECTS][CHARNUM]) {
    printf("--------------------\n");
    printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

    for (int i = 0; i < SUBJECTS; i++) {
        double subjectScore = 0.0;
        for (int j = 0; j < STUDENTS; j++) {
            subjectScore += studentScores[j][i];
        }
        double avgSubjectScore = subjectScore / STUDENTS;
        printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], avgSubjectScore);
    }
}

int main() {
    // �л� �� ���� ������ �����ϴ� �迭��
    char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
    char studentNames[STUDENTS][CHARNUM] = { "" };
    double studentScores[STUDENTS][SUBJECTS] = { 0.0 };

    // �л� �̸� �Է� �ޱ�
    printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d��° �л��� �̸��� �Է��ϼ���: ", i + 1);
        scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
    }

    // �Էµ� �л� �̸� ���
    printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
    printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s", studentNames[i]);
        if (i != STUDENTS - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("--------------------\n");

    // �� �л��� ���� ���� �Է� �ޱ�
    printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s�� ����:", studentNames[i]);
        for (int j = 0; j < SUBJECTS; j++) {
            scanf_s("%lf", &studentScores[i][j]);
        }
    }

    printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");

    // �л� �� ��� ���� ��� �Լ� ȣ��
    printStudentAverage(studentScores, studentNames);

    // ���� �� ��� ���� ��� �Լ� ȣ��
    printSubjectAverage(studentScores, subjectNames);

    printf("���α׷��� �����մϴ�. ");
    return 0;
}
