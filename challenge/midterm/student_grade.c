#include <stdio.h>

int main() {

	int a = 5;
	printf("%p", &a);
	int* a_ptr = &a;
	print("%d", *a_ptr);
	print("%p", *a_ptr);
	a_ptr += 1;
	print("%p", a_ptr)
		return 0;
}