#include <stdio.h>

long mutif(long value); //곱 long 정수형받기

void main()
{
	printf("1부터 2까지의 곱은 %d\n", multif(2)); //1부터 2까지 곱
	printf("1부터 3까지의 곱은 %d\n", multif(3)); //1부터 3까지 곱
	printf("1부터 5까지의 곱은 %d\n", multif(5)); //1부터 5까지 곱
}

long mutif(long value)
{
	long i ; //i는 1부터 시작
	long multi = 0; //합은 0부터 시작

	for (i = 1; i <= value; i= i+1) //i가 value가 될 때 까지 반복 
	{
		multi  = multi  + i; // 하고 곱은 곱+ i만큼 증가 
		i++; //i는 1만큼 계속 증가 
	}

	return multi; //반환 
}