#include <stdio.h>	//printf
#include <string.h>	//strcpy

union book{
	char name[10];
	int page;
};


int main(void)
{

	union book b1;

	b1.page = 100;

	strcpy(b1.name, "chen");

	printf("b1.name=%s,b1.page=%d,sizeof=%d\n", b1.name, b1.page, sizeof(union book));



	return 0;
}
