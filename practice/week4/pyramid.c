#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf ("%d", & floor);

	for (int i = 0; i < floor; i ++) { //i는 0부터 시작해서  floor받은거 보다 i가 작을때까지 반복 하고 i 1추가
		for (int j = 0; j < floor - 1 - i; j ++) { //j도 0부터 시작하고 j는 floor에서 -1-i만큼 될때까지 하고 j1추가
			printf("s");//s로 표현
		}
		for (int k = 0; k < i * 2 + 1; k ++) {	//k는 0부터 k 가i*2+1 될때까지 하고 k1추가
			printf("*"); //*로 표현
		}
		printf("\n"); //줄바꿈 
	}
	return 0;
}