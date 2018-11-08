#include <stdio.h>
void main(){
	//for specified memory allocation
	int *ptr=(int *) malloc(sizeof(int));
	//free
	free(ptr);
	
	
	//for multiple specified memory allocation
	int *arr=(int *)calloc(5,sizeof(int));
	//free
	free(arr);
}
