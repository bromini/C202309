#include <stdio.h>
#define NUMCITY 3 //NUMCITY를 3으로 선언 컴파일때 
#define NUMPEOPLE 2 //NUMPEOPLE를 3으로 선언 컴파일때 

char names[NUMPEOPLE][10]; //배열 크기 10으로 설정
char cities[NUMCITY][10]; //배열 크기 10으로 설정

void calculateTravelDays();

int main() {

	//사용자로부터 도시 이름 입력 받기
	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) { //for문을 이용해 NUMCITY가 될때 까지(즉 9까지) 실행하고 1씩 증가 
		scanf_s("%s", cities[i], (int)sizeof(cities[i])); // 사용자로부터 도시 이름 입력 받기
	}

	//사용자 이름 받기 
	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) { // for문을 이용해 NUMPEOPLE가 될때 까지(즉 9까지) 실행하고 1씩 증가
		scanf_s("%s", names[i], (int)sizeof(names[i])); // 사용자로부터 여행자 이름 입력 받기
	}

	//함수 호출
	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	//각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) { 
		for (int j = 0; j < NUMPEOPLE; j++) { 
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요:", cities[i], names[j]); //배열에 들어가있는 i j 출력
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	//각 도시별 총 일 수 및 평균 일 수 계산 및 출력 
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0; //초기 총합 0일
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j]; //일 수를  총합에 계속 더하기 
		}
		float averageDays = (float)totalDays / NUMPEOPLE; // 평균: 총 일 수를 사람 수로 나누기
		printf("도시 %s에서 보낸 총 일 수: %d, 평균 일 수 :%.2f\n", cities[i], totalDays, averageDays);
	}
}