#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

struct a_t{
	int a;
	int b;
};

struct b_t{
	int a;
	int b;
	struct a_t *c;
	struct b_t *d;
};

int main(void)
{
	struct a_t t = {55,66};

	struct b_t a = {123};

	a.c = &t;

	a.d = &a;

	printf("value : %d : %d\n", t.a, a.c->a);
	printf("value : %d\n", a.a);
	printf("value : %d\n", a.d->d->a);
	printf("value : %d\n", a.d->d->d->d->d->d->a);
/*
 *    struct b_t a = {11,22,{33,44}};
 *
 *    
 *    printf("a.a : %d\n", a.a);
 *    printf("value : %d\n", a.c.a);
 */
	return 0;
}
