#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)"); // ���� �������� �Է�
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) { //floor �� ��ŭ ��� -1��ŭ ����
		for (int j = 0; j < floor - 1; j++) { //j 0���� �ؼ� floor -1��ŭ ���� �ݺ� j�� �ϳ��� Ŀ�� 
			printf("s"); // s�� ���
		}
		for (int k = 0; k < 2 * i - 1; k++) { //0���� �ؼ� i���ϱ� 2 -1 ��ŭ���� �ݺ� k�� �ϳ��� ����
			printf("*"); //*�� ���
		}
		printf("\n"); //�ٹٲ�
	}
	return 0;
}