#include <stdio.h>

long mutif(long value); //�� long �������ޱ�

void main()
{
	printf("1���� 2������ ���� %d\n", multif(2)); //1���� 2���� ��
	printf("1���� 3������ ���� %d\n", multif(3)); //1���� 3���� ��
	printf("1���� 5������ ���� %d\n", multif(5)); //1���� 5���� ��
}

long mutif(long value)
{
	long i ; //i�� 1���� ����
	long multi = 0; //���� 0���� ����

	for (i = 1; i <= value; i= i+1) //i�� value�� �� �� ���� �ݺ� 
	{
		multi  = multi  + i; // �ϰ� ���� ��+ i��ŭ ���� 
		i++; //i�� 1��ŭ ��� ���� 
	}

	return multi; //��ȯ 
}