#include <stdio.h>

int main()
{
    int i = 0;

    do {
        // i가 짝수이면 반복문 처음으로 돌아가기
        if (i % 2 == 0) {
            i++;
            continue;
        }
        printf("%d Hello World!\n", i);
        i++;
    } while (i < 10);

    return 0;
}
