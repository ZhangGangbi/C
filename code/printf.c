#include <stdio.h>	//printf

int main(void)
{
	int a=1, b=2;
	
	short c = 3;

	char d = 65;

	unsigned long long int e=5;

	float f = 1.0;
	double doub = 1.0;

	printf("a=%d, b=%d, c=%hd, d=%c\n", a, b, c, d);
	printf("%s\n", "abc");

	printf("%llu\n", e);

	printf("%.10f\n", f);

	printf("%.15lf\n", doub);

	printf("%5s\n", "abcdefg");

	return 0;
}
