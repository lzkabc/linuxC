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
	int i;
	struct cls_t cls[MAX] = {{"zhang san", 19}, {"li si", 18}, {"tom", 20}, {"jim", 120}};

	struct cls_t *p = NULL;

	p = cls;

	for (i = 0; i < MAX; i++)
	{
		snprintf(cls[i].name, sizeof(cls[i].name), "cls_%c%c", rand() % 26 + 'A', rand() % 26 + 'a');
		cls[i].age = rand() % 3 + 18;
	}


	for (i = 0; i < MAX; i++)
	{
		/*printf("name : %-10s age : %3d\n", cls[i].name, cls[i].age);*/
		/*printf("name : %-10s age : %3d\n", p[i].name, p[i].age);*/
		printf("name : %-10s age : %3d\n", (p + i)->name, (p + i)->age);
	}

	
	printf("name : %s\n", (p + MAX - 1)->name);
	strcpy((p + MAX - 1)->name,"tom");
	printf("name : %s\n", (p + MAX - 1)->name);
	return 0;
}
