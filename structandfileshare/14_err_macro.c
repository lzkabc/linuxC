#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>


#define TEST(a, b) a##b


#define ERROP(con, info, ret) do{	\
			if (con)				\
			{						\
				printf("malloc "#info" false!\n");		\
				ret;				\
			}						\
		}while(0)

int main(void)
{
	int ***p = NULL;
	

	int TEST(a, b) = 100;

	printf("ab : %d\n", ab);

	//p *p **p
	p = (int ***)malloc(sizeof(int **));
	p = NULL;
	ERROP(NULL == p, hello world, goto ERR1);

    /*
	 *if (NULL == p)
	 *{
	 *    printf("malloc p false!\n");
	 *    return -1;
	 *}
     */

	*p = (int **)malloc(sizeof(int *));
	ERROP(NULL == *p, *p, goto ERR2);
    /*
	 *if (NULL == *p)
	 *{
	 *    free(p);
	 *    printf("malloc *p false!\n");
	 *    return -1;
	 *}
     */

	**p = (int *)malloc(sizeof(int));
	/***p = NULL;*/
    ERROP(NULL == **p, **p , goto ERR3);

	/*
	 *if (NULL == **p)
	 *{
	 *    free(*p);
	 *    free(p);
	 *    printf("malloc **p false!\n");
	 *    return -1;
	 *}
     */
	***p = 123;
	printf("**p : %d\n", ***p);
	return 0;
ERR3:
	free(*p);
ERR2:
	free(p);
ERR1:
	return -1;
}
