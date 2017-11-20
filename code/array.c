#include <stdio.h>	//printf

int main(void)
{
	char array[3] = {1, 2, 3};	

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;


	char array_t[2][3] = {{1, 2, 3}, {4, 5, 6}};

	array_t[0][0] = 1;
	array_t[0][1] = 2;
	array_t[0][2] = 3;
	array_t[1][0] = 4;
	array_t[1][1] = 5;
	array_t[1][2] = 6;



	return 0;
}
