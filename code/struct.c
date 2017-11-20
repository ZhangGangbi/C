#include <stdio.h>
#include <string.h>	

struct student
{

	char name[10];
	unsigned short age;
	unsigned int numb;
	
};

struct test{
	int a;
	char b;
	short c;
	float f;
};



int main(void)
{
	struct student st1={"chen", .age=18, 201607};

	struct student *p;	

	p = &st1;

/*
	st1.age = 18;
	st1.numb = 201607;

	strcpy(st1.name, "chen");
*/
	printf("st1.age=%hu, st1.numb=%u, st1.name=%s\n", p->age, p->numb, p->name);

	printf("sizeof(struct test)=%d\n", sizeof(struct test));


	return 0;
}
