#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

struct cls_t {
	char name[64];
	int id;
	int age;
	char sex;
	int *p;
	//.....
};

int main(void)
{
	int a = 10;
	/*struct cls_t cls = {"tom", 100086, 18, 'M'};*/
	struct cls_t cls = {.age = 19};

	cls.p = &a;

	printf("age : %d\n", cls.age);
	printf("age : %d\n", (&cls)->age);
	// . ->
	printf("p : %d\n", *(cls.p));
	/*printf("p : %d\n", cls.(*p));*/
	return 0;
}
