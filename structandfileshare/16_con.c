#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <share.h>

#define AA 0
/*#define BB 0*/
#define CC 3


int main(void)
{
	
	//关心是否定义这个宏 如果定义则不执行 如果没有定义，则执行下面语句
	#ifndef tom
		printf("AAAA!\n");
	#endif	

	//关心是否定义这个宏 如果定义则执行 如果没有定义，则不执行下面语句
	#ifdef BB
		printf("BBBBB!\n");
	#endif	


	#if AA
	printf("hello!\n");
	#elif BB
	printf("world!\n");
	#elif CC
	printf("test1!\n");
	#else
	printf("err!\n");
	#endif
	return 0;
}
