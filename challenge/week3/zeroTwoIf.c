#include <stdio.h>

int main() {
	int num;
	printf("숫자를 입력하시오: "); //숫자 입력하라고 출력
	scanf_s(" % d", &num);// 숫자 입력

	if (num == 0) { //num에 0 입력 받으면  zero 프린트
		printf("zero");
	}
	else if  (num == 1) { //num에 1입력 받으면   one 프린트
		printf("one");
	}
	else if (num == 2) { //num에 2입력 받으면   two 프린트
		printf("two");
	}
	else  {  //num이 0~2가 아니라면  not 0~2 프린트
		printf("not 0~2");
	}
}