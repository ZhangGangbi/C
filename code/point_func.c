#include <stdio.h>	//printf
#include <string.h>	//strcat

void func(int *c,int *d)
{

	*c = 10;
	*d = 11;

	return;
}


int main(void)
{

	int a=1, b=2;

	func(&a, &b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
