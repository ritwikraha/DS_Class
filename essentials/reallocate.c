#include <stdio.h>
void main()
{
	int *ptr;
	ptr=(int *)malloc(8);
	printf("%d\n",sizeof(*ptr));
	ptr=(int *)realloc(ptr,4);
	printf("%d\n",sizeof(*ptr));
}
