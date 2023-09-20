#include <stdio.h>

int main() {
	int choice; //choice 상수형으로 지정

	printf("1. 파일 저장\n"); //1,2,3 지정
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s(" % d", &choice);// 숫자 선택

	if (choice == 1) {
		printf("파일을 저장합니다.\n");//1을 선택한다면 파일을 저장합니다라고 출력
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다.\n"); //그렇지 1이 아니라면 넘어간 다음 2라면 저장 없이 닫습니다 출력
	}
	else if (choice == 3) { //위도 아니라면 3이라면 종료합니다 출력 
		printf("종료합니다.\n");
	}
	else  { //1,2,3 이 아닌 다른 문자나 숫자를 입력한 경우는 잘못 입력하셨습니다 출력
		printf("잘못 입력하셨습니다.");
	}
}