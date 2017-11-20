#include <stdio.h>	//scanf

int main(void)
{
	int a=0,b=0;
	int rtv;
	

	rtv = scanf("%d%d", &a, &b);

	printf("rtv=%d, a=%d, b=%d,\n", rtv, a, b);

	return 0;
}
