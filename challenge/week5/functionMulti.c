#include <stdio.h>

long sum(long value); // ���� ����ϴ� �Լ�

int main(void)
{
    printf("1���� 2������ ���� %ld\n", sum(2));
    printf("1���� 3������ ���� %ld\n", sum(3));
    printf("1���� 5������ ���� %ld\n", sum(5));

    return 0;
}

long sum(long value)
{
    long i; // i�� 1���� ����
    long sum = 0; // ���� 0���� ����

    for (i = 1; i <= value; i++) // i�� value�� �� ������ �ݺ�
    {
        sum = sum + i; // ���� sum + i��ŭ ����
    }

    return sum; // ���� ��ȯ
}
