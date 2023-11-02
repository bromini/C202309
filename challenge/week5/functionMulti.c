#include <stdio.h>

long sum(long value); // 합을 계산하는 함수

int main(void)
{
    printf("1부터 2까지의 합은 %ld\n", sum(2));
    printf("1부터 3까지의 합은 %ld\n", sum(3));
    printf("1부터 5까지의 합은 %ld\n", sum(5));

    return 0;
}

long sum(long value)
{
    long i; // i는 1부터 시작
    long sum = 0; // 합은 0부터 시작

    for (i = 1; i <= value; i++) // i가 value가 될 때까지 반복
    {
        sum = sum + i; // 합은 sum + i만큼 증가
    }

    return sum; // 합을 반환
}
