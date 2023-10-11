#include <stdio.h>
#define STUDENTS 5 //학생 5명으로 정의 

void classifyStudents(int scores[], char targetGrade) { //정수형 점수 문자형 성적
	printf("학생 성적 분류: \n");
	char grade = ' '; 
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) { //90이상이면 A
			grade = 'A';
		}
		else if (scores[i] >= 80) {//80이상이면 B
			grade = 'B';
		}
		else if (scores[i] >= 70) {//70이상이면 C
			grade = 'C';
		}
		else if (scores[i] >= 60) {//60이상이면 D
			grade = 'D';
		}
		else { //그 외는 모두 F로 처리
			grade = 'F';
		}

		if (targetGrade == grade) {
			printf("%d 학생은  %c점수를 받았습니다", i + 1, targetGrade);
		}
	}
}

int main() {
	//학생들의 성적을 저장할 배열 선언하기 
	int scores[STUDENTS];

	//학생들의 성적 입력 받기 
	for (int i = 0; i < STUDENTS; i++) { //i가 0부터 시작해서 STUDENTS 즉 5명까지 받음 i는 1씩 증가
		printf("학생 %d의 성적을 입력하세요: ", i + 1); 
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); // 버퍼 임시 저장 변수 

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오");
	scanf_s("%c", &target, 1);

	//학생들의 성적 분류 및 출력
	classifyStudents(scores, target);

	//특정 학점을 받은사람 출력 

	return 0;
}