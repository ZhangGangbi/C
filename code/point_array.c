
#include <stdio.h>	
int main(void)
{

	int array[2][3] = {{1, 2, 3},{4, 5, 6}};

	int (*p)[3];

	p = array;    //p的类型是int (*)[3]

    printf("array[0][1]=%d\n", array[0][1]);
	printf("*(p+1)=%d\n", *(int *)(p+1));
   
	printf("(*p)[1]=%d\n",(*p)[1] );        
	
	*p++;
    printf("(*p)[1]=%d\n",(*p)[1] );

	return 0;
}
