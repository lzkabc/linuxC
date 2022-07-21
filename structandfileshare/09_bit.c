#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

struct a_t{
	//led => on off
	//=> 1bit on => 0 off => 1
	int a : 2;//32bit
	int b : 32;
};

int main(void)
{
	
	/*int b : 10;*/

	struct a_t a = {1};

	a.a = 2;

	printf("sizeof(struct a_t) = %d\n", sizeof(struct a_t));
	return 0;
}
