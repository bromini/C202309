#include <stdio.h>
#define STUDENTS 5 //�л� 5������ ���� 

void classifyStudents(int scores[], char targetGrade) { //������ ���� ������ ����
	printf("�л� ���� �з�: \n");
	char grade = ' '; 
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) { //90�̻��̸� A
			grade = 'A';
		}
		else if (scores[i] >= 80) {//80�̻��̸� B
			grade = 'B';
		}
		else if (scores[i] >= 70) {//70�̻��̸� C
			grade = 'C';
		}
		else if (scores[i] >= 60) {//60�̻��̸� D
			grade = 'D';
		}
		else { //�� �ܴ� ��� F�� ó��
			grade = 'F';
		}

		if (targetGrade == grade) {
			printf("%d �л���  %c������ �޾ҽ��ϴ�", i + 1, targetGrade);
		}
	}
}

int main() {
	//�л����� ������ ������ �迭 �����ϱ� 
	int scores[STUDENTS];

	//�л����� ���� �Է� �ޱ� 
	for (int i = 0; i < STUDENTS; i++) { //i�� 0���� �����ؼ� STUDENTS �� 5����� ���� i�� 1�� ����
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1); 
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); // ���� �ӽ� ���� ���� 

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);

	//�л����� ���� �з� �� ���
	classifyStudents(scores, target);

	//Ư�� ������ ������� ��� 

	return 0;
}