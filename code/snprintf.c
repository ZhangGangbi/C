#include <stdio.h>	

int main(void)
{
	char str_tmp_buf[20];
	char str_buf[] = "helloworld";

	sscanf(str_buf,  "%s", str_tmp_buf);
	
	printf("%s\n", str_tmp_buf);
	
	return 0;
}
