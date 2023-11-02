#include <stdio.h>

int hapf(int value); // 합을 계산하는 함수

int main(void)
{
    printf("1부터 10까지의 합은 %d\n", hapf(10));
    printf("1부터 100까지의 합은 %d\n", hapf(100));
    printf("1부터 1000까지의 합은 %d\n", hapf(1000));

    return 0; // main 함수의 반환 값
}

int hapf(int value)
{
    int i = 1; // i는 1부터 시작
    int hap = 0; // 합은 0부터 시작

    while (i <= value) // i가 value가 될 때까지 반복
    {
        hap += i; // 합은 hap + i만큼 증가
        i++; // i는 1만큼 계속 증가
    }

    return hap; // 합을 반환
}
