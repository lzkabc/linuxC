#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>


#define PI 3.14
#define R 2
/*#define S  PI * R * R*/

#define S(r) PI * r * r

#define SWAP(a, b) 	do {			\
						typeof(a) t; \
						t = a; 	\
						a = b; 	\
						b = t;	\
					}while(0)


#define MAX(a, b) (((a) > (b)) ? (a) : (b)) 


#define MUL(a, b) ((a) * (b))

int mul(int a, int b)
{
	return a * b;
}



int max(int a, int b)
{
	if (a > b)
		return a;
	return b;	
}


float area(int r)
{
	return PI * r * r;
}


int main(void)
{
	const int pi = 3.14;

	/*PI = 4.13;*/

	printf("PI : %f\n", PI);
	printf("pi : %f\n", pi);
	printf("S : %f\n", S(2));
	printf("S : %f\n", S(3));

	printf("max : %d\n", MAX(12, 34));
	printf("max : %d\n", MAX(123, 34));
	printf("area : %f\n", area(2));


	printf("mul : %d\n", MUL(5, 3));
	printf("mul : %d\n", MUL(2 + 3, 3));
	printf("mul : %d\n", mul(5, 3));
	printf("mul : %d\n", mul(2 + 3, 3));


	int a = 12, b = 34;

	SWAP(a, b);

	printf("a : %d b : %d\n", a, b);
	return 0;
}
