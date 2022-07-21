#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

#define MAX 1000


struct cls_t {
	char name[64];
	int age;
};

int main(void)
{
	struct cls_t *p = NULL;

	//malloc calloc realloc
	p = (struct cls_t *)malloc(sizeof(struct cls_t));
	if (p == NULL)
	{
		return -1;
	}
	
	printf("malloc p success!\n");

	strcpy(p->name, "tom");

	printf("p->name : %s\n", p->name);

	free(p);

	return 0;
}
