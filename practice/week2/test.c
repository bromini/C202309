#include <stdio.h>

int main()
{
	int a = 10; //������ ���� a�� 10�� ����
	int b = 15; //������ ���� b�� 15�� ����
	printf("%d\n", a + b); // ������ ���� �� a+b ���

	char text1[10] = "Hello"; //���ڿ� 10���� character�� ���� �� �ִ� ����(text1) ���� , Hello�� ����
	char text2[50] = "World"; //���ڿ� 50���� character�� ���� �� �ִ� ����(text2) ���� , World�� ����

	printf("%s!\n", text1); //���ڿ��̹Ƿ� ���� ������%s�� ǥ���Ͽ� text1 ���
	printf("%s!\n", text2); //���ڿ��̹Ƿ� ���� ������%s�� ǥ���Ͽ� text2 ���

	return 0; //�Լ� ����� 0�� ��ȯ�ϴ� ��ɾ�
}