
/* malloc.c */

#include <stdio.h>
#include <stdlib.h>

#define F fflush(stdout)

int main()
{
	char *name;
	
	name = malloc(32);
	printf("Write your name : \n"); F;

	scanf("%s", name); /*	We removed & because
				name a is pointer and the value address is
				equal to the memory that we allocated thanks to
				malloc. Otherwise that will generate an error. 
			   */
	printf("Hello %s\n", name);
	free(name);

	return 0;
}

