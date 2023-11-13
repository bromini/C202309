#include <stdio.h>

#define STUDENTS 5 // �л� 5������ ����

void classifyStudents(int* scores, char targetGrade) {
    printf("�л� ���� �з�: \n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        // �����͸� �̿��Ͽ� ������ ���� ���� �ο�
        if (*(scores + i) >= 90) {
            grade = 'A';
        }
        else if (*(scores + i) >= 80) {
            grade = 'B';
        }
        else if (*(scores + i) >= 70) {
            grade = 'C';
        }
        else if (*(scores + i) >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        // ����ڰ� �Է��� Ư�� ������ ���� �л��� ���
        if (targetGrade == grade) {
            printf("%d �л��� %c ������ �޾ҽ��ϴ�\n", i + 1, targetGrade);
        }
    }
}

int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        // �����͸� �̿��Ͽ� ������ ����
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
        
        printf("%d �л��� ������ %d �Դϴ�. \n", i + 1, ranks[i]);
    }
}

int main() {
    // �л����� ������ ������ �迭 �����ϱ�
    int scores[STUDENTS];

    // �л����� ���� �Է� �ޱ�
    for (int i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    char ch = getchar(); // ���� �ӽ� ���� ����, ���� ����� ���ؼ�

    char target;
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &target, 1); // �л����� ���� �з� �� ���

    classifyStudents(scores, target);

    int sum = sumScores(scores);
    double average = averageScores(scores);
    printf("�л����� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

    printRanks(scores);

    return 0;
}
