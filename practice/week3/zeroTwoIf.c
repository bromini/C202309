#include <stdio.h>

int main() {
	int num;
	printf("���ڸ� �Է��Ͻÿ�: "); //���� �Է��϶�� ���
	scanf_s(" % d", &num);// ���� �Է�

	if (num == 0) { //num�� 0 �Է� ������  zero ����Ʈ
		printf("zero");
	}
	else if  (num == 1) { //num�� 1�Է� ������   one ����Ʈ
		printf("one");
	}
	else if (num == 2) { //num�� 2�Է� ������   two ����Ʈ
		printf("two");
	}
	else  {  //num�� 0~2�� �ƴ϶��  not 0~2 ����Ʈ
		printf("not 0~2");
	}
}