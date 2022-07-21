#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <share.h>

int main(void)
{
	char s[128];

	GETLINES("please input string : ", s);
	

	ERRP(strcmp(s, "exit") == 0, exit, goto ERR1);

	printf("s : %s\n", s);

	return 0;
ERR1:
	return -1;
}
