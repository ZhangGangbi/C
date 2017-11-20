#include <stdio.h>	//printf


void hello(int, int);

extern int g_func_t;

int main(void)
{
	int a=1,b=2;
	int rtv=1;

	g_func_t = 2;

	hello(a, b);

	func();	

	printf("b = %d, rtv =%d", b, rtv);

	return 0;	
}


void hello(int a, int b)
{		
	printf("hello world\n");
	b = 100;

	return;
}

