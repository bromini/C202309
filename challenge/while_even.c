#include <stdio.h>

int main(void) {
	int i = 0; //i �� 0 ����
	while (i < 10) {//i�� 10�� �ɵ��� ���� ����
		if (i % 2 == 0){ //i ������ 2�� 0�̸� ����ϱ�
			continue;
		}
		printf("%d Hello World!\n", i++); //����Ʈ�ϰ� i�� 1�߰�
	}
	return 0;
}