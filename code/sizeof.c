#include <stdio.h>	//printf
#include <string.h>	//strlen

int main(void)
{
	int a;
	char b[] = "abc";
	char c;
	char *p = NULL;
	int rtv;


	rtv = strlen(b);

	printf("strlen a=%d\n", rtv);

	rtv = strlen("abc");

	printf("strlen a=%d\n", rtv);

	return 0;
}
