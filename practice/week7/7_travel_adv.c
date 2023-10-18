#include <stdio.h>
#define NUMCITY 3 //NUMCITY를 3으로 선언 컴파일때 
#define NUMPEOPLE 2  //NUMPEOPLE를 3으로 선언 컴파일때 

char names[NUMPEOPLE][10];  //배열 크기 10으로 설정
char cities[NUMCITY][10]; //배열 크기 10으로 설정

void calculateTravelDays();  // 여행 일수를 계산하고 출력 함수
int getSum(int numArray[], int length); //  합을 계산 함수
double getAverage(int numArray[], int length); // 평균을 계산 함수
void printFamousCity(double dayArray[], int length); // 인기 있는 도시 찾는 함수

int main() {
    printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
    for (int i = 0; i < NUMCITY; i++) { //for문을 이용해 NUMCITY가 될때 까지(즉 9까지) 실행하고 1씩 증가 
        scanf_s("%s", cities[i], (int)sizeof(cities[i])); // 사용자로부터 도시 이름 입력 받기
    }

    printf("%d개의 여행자 이름을 차례대로 입력해주세요.\n", NUMPEOPLE);
    for (int i = 0; i < NUMPEOPLE; i++) {  // for문을 이용해 NUMPEOPLE가 될때 까지(즉 9까지) 실행하고 1씩 증가
        scanf_s("%s", names[i], (int)sizeof(names[i])); // 사용자로부터 여행자 이름 입력 받기
    }

    // 함수 호출
    calculateTravelDays();
    return 0;
}
 //각 도시별 총 일 수 및 평균 일 수 계산 및 출력 
int getSum(int numArray[], int length) {
    int totalDays = 0; //초기 총합 0일
    for (int i = 0; i < length; i++) {
        totalDays += numArray[i]; //일 수를  총합에 계속 더하기 
    }
    return totalDays; // 합을 반환
}

double getAverage(int numArray[], int length) {
    int totalDays = getSum(numArray, length); // 합 계산
    double averageDays = (double)totalDays / length; // 평균 계산
    return averageDays; // 평균 반환
}

void calculateTravelDays() {
    int travelDays[NUMCITY][NUMPEOPLE]; // 도시와 여행자별 일 수 저장하는 2차원 배열

    for (int i = 0; i < NUMCITY; i++) {
        for (int j = 0; j < NUMPEOPLE; j++) {
            printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요:", cities[i], names[j]);
            scanf_s("%d", &travelDays[i][j]); // 각 도시와 여행자의 일 수 입력 받기
        }
    }

    double averageDays[NUMCITY]; 
    char cities[NUMCITY][10]; 

    
    for (int i = 0; i < NUMCITY; i++) {
        int totalDay = getSum(travelDays[i], NUMPEOPLE); // 각 도시별 총 일 수 계산
        double averageDay = getAverage(travelDays[i], NUMPEOPLE); // 각 도시별 평균 일 수 계산
        printf("도시 %s에서 보낸 총 일 수: %d, 평균 일 수: %.2f\n", cities[i], totalDay, averageDay);
        averageDays[i] = averageDay; // 평균 일 수를 배열에 저장
    }

    // 인기 있는 도시 출력 함수 호출
    printFamousCity(averageDays, NUMCITY);
}

void printFamousCity(double dayArray[], int length) {
    double maxDay = 0; // 가장 큰 평균 일 수
    int maxDayIndex = 0; 
    for (int i = 0; i < length; i++) {
        if (dayArray[i] > maxDay) { 
            maxDay = dayArray[i];
            maxDayIndex = i;
        }
    }
    printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다. (평균 머문일: %.2f)\n", cities[maxDayIndex], maxDay);
}
