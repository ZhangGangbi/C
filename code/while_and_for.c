#include <stdio.h>	//printf

int main(void)
{
	int i=1;

	while(1)
	{
		printf("i=%d\n", i);
		i++;
	}

	do{
		printf("i=%d\n", i);
		i++;

	}while(i<10);







	
	i=1;
	while(i<10)
	{
		printf("...");	
		i++;
	}

	for(i=1; i<10; i++)
	{
		printf("...");	
	}

	return 0;
}
