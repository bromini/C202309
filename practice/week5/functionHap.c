#include <stdio.h>

int hapf(int value); // ���� ����ϴ� �Լ�

int main(void)
{
    printf("1���� 10������ ���� %d\n", hapf(10));
    printf("1���� 100������ ���� %d\n", hapf(100));
    printf("1���� 1000������ ���� %d\n", hapf(1000));

    return 0; // main �Լ��� ��ȯ ��
}

int hapf(int value)
{
    int i = 1; // i�� 1���� ����
    int hap = 0; // ���� 0���� ����

    while (i <= value) // i�� value�� �� ������ �ݺ�
    {
        hap += i; // ���� hap + i��ŭ ����
        i++; // i�� 1��ŭ ��� ����
    }

    return hap; // ���� ��ȯ
}
