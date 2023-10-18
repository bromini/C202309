#include <stdio.h>
#define NUMCITY 3 //NUMCITY�� 3���� ���� �����϶� 
#define NUMPEOPLE 2  //NUMPEOPLE�� 3���� ���� �����϶� 

char names[NUMPEOPLE][10];  //�迭 ũ�� 10���� ����
char cities[NUMCITY][10]; //�迭 ũ�� 10���� ����

void calculateTravelDays();  // ���� �ϼ��� ����ϰ� ��� �Լ�
int getSum(int numArray[], int length); //  ���� ��� �Լ�
double getAverage(int numArray[], int length); // ����� ��� �Լ�
void printFamousCity(double dayArray[], int length); // �α� �ִ� ���� ã�� �Լ�

int main() {
    printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
    for (int i = 0; i < NUMCITY; i++) { //for���� �̿��� NUMCITY�� �ɶ� ����(�� 9����) �����ϰ� 1�� ���� 
        scanf_s("%s", cities[i], (int)sizeof(cities[i])); // ����ڷκ��� ���� �̸� �Է� �ޱ�
    }

    printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
    for (int i = 0; i < NUMPEOPLE; i++) {  // for���� �̿��� NUMPEOPLE�� �ɶ� ����(�� 9����) �����ϰ� 1�� ����
        scanf_s("%s", names[i], (int)sizeof(names[i])); // ����ڷκ��� ������ �̸� �Է� �ޱ�
    }

    // �Լ� ȣ��
    calculateTravelDays();
    return 0;
}
 //�� ���ú� �� �� �� �� ��� �� �� ��� �� ��� 
int getSum(int numArray[], int length) {
    int totalDays = 0; //�ʱ� ���� 0��
    for (int i = 0; i < length; i++) {
        totalDays += numArray[i]; //�� ����  ���տ� ��� ���ϱ� 
    }
    return totalDays; // ���� ��ȯ
}

double getAverage(int numArray[], int length) {
    int totalDays = getSum(numArray, length); // �� ���
    double averageDays = (double)totalDays / length; // ��� ���
    return averageDays; // ��� ��ȯ
}

void calculateTravelDays() {
    int travelDays[NUMCITY][NUMPEOPLE]; // ���ÿ� �����ں� �� �� �����ϴ� 2���� �迭

    for (int i = 0; i < NUMCITY; i++) {
        for (int j = 0; j < NUMPEOPLE; j++) {
            printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���:", cities[i], names[j]);
            scanf_s("%d", &travelDays[i][j]); // �� ���ÿ� �������� �� �� �Է� �ޱ�
        }
    }

    double averageDays[NUMCITY]; 
    char cities[NUMCITY][10]; 

    
    for (int i = 0; i < NUMCITY; i++) {
        int totalDay = getSum(travelDays[i], NUMPEOPLE); // �� ���ú� �� �� �� ���
        double averageDay = getAverage(travelDays[i], NUMPEOPLE); // �� ���ú� ��� �� �� ���
        printf("���� %s���� ���� �� �� ��: %d, ��� �� ��: %.2f\n", cities[i], totalDay, averageDay);
        averageDays[i] = averageDay; // ��� �� ���� �迭�� ����
    }

    // �α� �ִ� ���� ��� �Լ� ȣ��
    printFamousCity(averageDays, NUMCITY);
}

void printFamousCity(double dayArray[], int length) {
    double maxDay = 0; // ���� ū ��� �� ��
    int maxDayIndex = 0; 
    for (int i = 0; i < length; i++) {
        if (dayArray[i] > maxDay) { 
            maxDay = dayArray[i];
            maxDayIndex = i;
        }
    }
    printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��� �ӹ���: %.2f)\n", cities[maxDayIndex], maxDay);
}
