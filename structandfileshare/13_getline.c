#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

#define GETLINES(info, buf) do{							\
					printf(info);						\
					fgets(buf, sizeof(buf), stdin);		\
					if (buf[strlen(buf) - 1] == '\n')	\
						buf[strlen(buf) - 1] = '\0';	\
				}while(0)

int main(void)
{
	char name[64];
	char s[128];

	GETLINES("please input name : ", name);

	printf("name : %s\n", name);

	GETLINES("entern string : ", s);
	printf("s : %s\n", s);
	return 0;
}
