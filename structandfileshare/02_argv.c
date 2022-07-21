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

void test(struct cls_t *cls)
{
	strcpy(cls->name, "zhangsan");

	printf("test : age = %d\n", cls->age);

	cls->age = 20;

}

int main(void)
{
	int a = 10;
	struct cls_t cls = {"tom", 100086, 18, 'M'};
	/*struct cls_t cls = {.age = 19};*/

	cls.p = &a;

	test(&cls);
	printf("main : age = %d\n", cls.age);
	printf("main : name = %s\n", cls.name);
	return 0;
}
