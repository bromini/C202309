#include <stdio.h>

int hapf(int value); //�� int �������ޱ�

void main()
{
	printf("1���� 10������ ���� %d\n", hapf(10)); //1���� 10���� ��
	printf("1���� 100������ ���� %d\n", hapf(100)); //1���� 100���� ��
	printf("1���� 1000������ ���� %d\n", hapf(1000)); //1���� 1000������
}

int hapf(int value) 
{
	int i = 1; //i�� 1���� ����
	int hap = 0; //���� 0���� ����

	while (i <= value) //i�� value�� �� �� ���� �ݺ� 
	{
		hap = hap + i; // �ϰ� ���� ��+ i��ŭ ���� 
		i++; //i�� 1��ŭ ��� ���� 
	}

	return hap; //��ȯ 
}