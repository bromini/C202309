#include <stdio.h>
#define NUMCITY 3 //NUMCITY�� 3���� ���� �����϶� 
#define NUMPEOPLE 2 //NUMPEOPLE�� 3���� ���� �����϶� 

char names[NUMPEOPLE][10]; //�迭 ũ�� 10���� ����
char cities[NUMCITY][10]; //�迭 ũ�� 10���� ����

void calculateTravelDays();

int main() {

	//����ڷκ��� ���� �̸� �Է� �ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) { //for���� �̿��� NUMCITY�� �ɶ� ����(�� 9����) �����ϰ� 1�� ���� 
		scanf_s("%s", cities[i], (int)sizeof(cities[i])); // ����ڷκ��� ���� �̸� �Է� �ޱ�
	}

	//����� �̸� �ޱ� 
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) { // for���� �̿��� NUMPEOPLE�� �ɶ� ����(�� 9����) �����ϰ� 1�� ����
		scanf_s("%s", names[i], (int)sizeof(names[i])); // ����ڷκ��� ������ �̸� �Է� �ޱ�
	}

	//�Լ� ȣ��
	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	//�� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) { 
		for (int j = 0; j < NUMPEOPLE; j++) { 
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���:", cities[i], names[j]); //�迭�� ���ִ� i j ���
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	//�� ���ú� �� �� �� �� ��� �� �� ��� �� ��� 
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0; //�ʱ� ���� 0��
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j]; //�� ����  ���տ� ��� ���ϱ� 
		}
		float averageDays = (float)totalDays / NUMPEOPLE; // ���: �� �� ���� ��� ���� ������
		printf("���� %s���� ���� �� �� ��: %d, ��� �� �� :%.2f\n", cities[i], totalDays, averageDays);
	}
}