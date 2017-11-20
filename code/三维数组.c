#include <stdio.h>	//printf

int main(void)
{
	//int array[2][3] = {{0, 1, 2}, {3, 4, 5}};

	int array[2][3][4] = {{{0,1,2,3}, {4, 5, 6, 7}, {8, 9, 10, 11}}, {{12, 13, 14, 15}, {16, 17, 18, 19}, {20, 21, 22, 23}} };


	printf("array[1][2][3]=%d\n", array[1][2][3]);

	return 0;
}
