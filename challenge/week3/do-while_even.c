#include <stdio.h>

int main()
{
    int i = 0;

    do {
        // i�� ¦���̸� �ݺ��� ó������ ���ư���
        if (i % 2 == 0) {
            i++;
            continue;
        }
        printf("%d Hello World!\n", i);
        i++;
    } while (i < 10);

    return 0;
}
