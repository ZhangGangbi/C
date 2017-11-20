#include <stdio.h>

int g_func_t = 1;

int func(void)
{

	printf("hello function, g_func_t=%d\n", g_func_t);

	return 0;
}
