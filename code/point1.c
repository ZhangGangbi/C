#include <stdio.h>	//printf

int main(void)
{
	int array[3] = {1, 2, 3};

	int *p;		//4

	
	p = array;

	array[0] = 11;
	p[0]	= 11;
	*array	= 11;
	*p	= 11;

	printf("array[0]=%d,p[0]=%d,*array=%d,*p=%d\n", array[0], p[0], *array, *p);


	return 0;
}
