#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>



#pragma pack(2)
struct cls_t{
	char sex;//1
	int age;//4

};

#pragma pack(0)
struct stu_t{
	char sex;//1
	int age;//4

};

int main(void)
{
	struct cls_t cls;

	printf("&cls : %p &cls + 1 : %p\n", &cls, &cls + 1);

	printf("&cls.sex : %p &cls.sex + 1 : %p\n", 
		&cls.sex, &cls.sex + 1);
	printf("&cls.age : %p\n", &cls.age);
	printf("sizeof(struct cls_t) = %d\n", sizeof(struct cls_t));
	printf("sizeof(struct stu_t) = %d\n", sizeof(struct stu_t));
	return 0;
}
