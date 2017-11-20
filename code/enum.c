#include <stdio.h>	




enum color{red, green, blue};	//0-2


int main(void)
{
	enum color co;	//int co

	co = red;	//co = 0;


	switch(co){
		case 0:
			printf("red...\n");
			break;
		case 1:
			printf("green...\n");
			break;
		case 2:
			break;
	
	}



	return 0;
}
