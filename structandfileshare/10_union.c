#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

union cls_t {
	char name[64];
	int tmp;
	int age;
};

int main(void)
{
	
	union cls_t cls;

	printf("&tmp : %p &age : %p\n", &cls.tmp, &cls.age);
	cls.tmp = 15;
	strcpy(cls.name ,"zhangsan");

	printf("name : %s\n", cls.name);
	cls.age = 19;
	printf("age : %d\n", cls.age);
	printf("sizeof(union cls_t) = %d\n", sizeof(union cls_t));
	return 0;
}
