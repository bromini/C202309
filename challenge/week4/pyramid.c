#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf ("%d", & floor);

	for (int i = 0; i < floor; i ++) { //i�� 0���� �����ؼ�  floor������ ���� i�� ���������� �ݺ� �ϰ� i 1�߰�
		for (int j = 0; j < floor - 1 - i; j ++) { //j�� 0���� �����ϰ� j�� floor���� -1-i��ŭ �ɶ����� �ϰ� j1�߰�
			printf("s");//s�� ǥ��
		}
		for (int k = 0; k < i * 2 + 1; k ++) {	//k�� 0���� k ��i*2+1 �ɶ����� �ϰ� k1�߰�
			printf("*"); //*�� ǥ��
		}
		printf("\n"); //�ٹٲ� 
	}
	return 0;
}