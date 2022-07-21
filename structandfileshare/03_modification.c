#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

struct cls_t {
	char name[64];
	int age;
	//.....
};


// type value_name
void mod_age(int *age)
{

	printf("mod : age = %d\n", *age);

	*age = 20;
}
int main(void)
{
	struct cls_t cls;// = {"tom", 100086, 18, 'M'};

	
	printf("please input name : ");
	fgets(cls.name, sizeof(cls.name), stdin);
	if (cls.name[strlen(cls.name) - 1] == '\n')
		cls.name[strlen(cls.name) - 1] = '\0';

	printf("please input age : ");
	scanf("%d", &cls.age);

	mod_age(&cls.age);

	printf("main : name = %s\n", cls.name);
	printf("main : age = %d\n", cls.age);
	return 0;
}
