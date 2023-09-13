#include <stdio.h>

int main()
{
	int a = 10; //정수형 변수 a에 10을 대입
	int b = 15; //정수형 변수 b에 15을 대입
	printf("%d\n", a + b); // 정수형 변수 값 a+b 출력

	char text1[10] = "Hello"; //문자열 10개의 character를 담을 수 있는 공간(text1) 선언 , Hello를 대입
	char text2[50] = "World"; //문자열 50개의 character를 담을 수 있는 공간(text2) 선언 , World를 대입

	printf("%s!\n", text1); //문자열이므로 서식 지정자%s로 표현하여 text1 출력
	printf("%s!\n", text2); //문자열이므로 서식 지정자%s로 표현하여 text2 출력

	return 0; //함수 결과로 0을 반환하는 명령어
}