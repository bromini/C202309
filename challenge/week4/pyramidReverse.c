#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)"); // 몇층 쌓을건지 입력
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) { //floor 줄 만큼 출력 -1만큼 감소
		for (int j = 0; j < floor - 1; j++) { //j 0부터 해서 floor -1만큼 까지 반복 j는 하나씩 커짐 
			printf("s"); // s로 출력
		}
		for (int k = 0; k < 2 * i - 1; k++) { //0부터 해서 i곱하기 2 -1 만큼까지 반복 k는 하나씩 증가
			printf("*"); //*로 출력
		}
		printf("\n"); //줄바꿈
	}
	return 0;
}