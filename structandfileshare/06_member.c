#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

void pri(char *name);

struct cls_t{
	char name[64];
	//char short int  long float double long double
	// arr point 
	//point_arr arr_point func_point point_func
	char *girl[10];

	void (*love)(char *name);

};

int main(void)
{
	int i;

	struct cls_t cls = {"tom", {"小花", "小草", "如花", "小楷", "范冰冰"}};

	cls.love = pri;

	for (i = 0; i < 4; i++)
		cls.love(cls.girl[i]);
	/*cls.love(cls.girl[2]);*/
	return 0;
}


void pri(char *name)
{
	printf("name : %s\n", name);
}
