#include <studio.h>

int main()
{   //정수형 변수  x y z 만들고 
	// 4를x 에 대입 , 2를 y에 대입
	int x = 4;
	int y = 2;
	int z;
	
	z = (x + y) * (x - y);
	printf("z = (x + y) * (x - y) = %d\n", z);

	z = (x * y) * (x / y);
	printf("z = (x * y) + (x / y) = %d\n", z);

	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);
}