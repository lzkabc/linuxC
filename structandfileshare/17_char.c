#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <share.h>

void test(void)
{
	printf("test : line = %d func = %s file = %s\n", 
		__LINE__, __func__, __FILE__);
}

int main(void)
{

	printf("line : %d funs : %s file : %s\n", 
		__LINE__, __func__, __FILE__);

	printf("time : %s\n", __TIME__);
	printf("date : %s\n", __DATE__);

	test();
	return 0;
}
