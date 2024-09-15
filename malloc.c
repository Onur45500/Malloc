
/* malloc.c */

#include <stdio.h>
#include <stdlib.h>

#define F fflush(stdout)

int main()
{
	char *name;
	
	name = malloc(32);
	printf("Write your name : \n"); F;
	scanf("%s", name);
	printf("Hello %s\n", name);
	free(name);

	return 0;
}

