#include <stdio.h>	
#include <string.h>	//strcat


int main(void)
{
	char dest[] = "hello";
	char str[] =  "world";

	char *p;

	int ch;
/*
	p = strcat(dest, str);

	printf("%s\n", p);

	ch = strcmp(dest, str);

	printf("ch=%d\n", ch);
*/
	p = strcpy(dest, str);
	
	printf("dest=%s,p=%s\n", dest, p);

	return 0;
}
