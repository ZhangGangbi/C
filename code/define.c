#include <stdio.h>	//printf

#define MAX(a, b)\
	({\
		typeof(a) c;\
		typeof(b) d;\
		c = a;\
		d = b;\
		&c == &d;\
		c>d?c:d;\
	})





int main(void)
{

	float data;
	
	data = MAX(2.0, 3.0);

	printf("data=%f\n", data);

	return 0;
}
