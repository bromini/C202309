#include <stdio.h>

int hapf(int value); //합 int 정수형받기

void main()
{
	printf("1부터 10까지의 합은 %d\n", hapf(10)); //1부터 10까지 합
	printf("1부터 100까지의 합은 %d\n", hapf(100)); //1부터 100까지 합
	printf("1부터 1000까지의 합은 %d\n", hapf(1000)); //1부터 1000까지합
}

int hapf(int value) 
{
	int i = 1; //i는 1부터 시작
	int hap = 0; //합은 0부터 시작

	while (i <= value) //i가 value가 될 때 까지 반복 
	{
		hap = hap + i; // 하고 합은 합+ i만큼 증가 
		i++; //i는 1만큼 계속 증가 
	}

	return hap; //반환 
}