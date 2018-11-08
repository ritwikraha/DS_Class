#include <stdio.h>
void main(){
	//for specified memory allocation
	int *ptr=(int *) malloc(sizeof(int));
	int a=10;
	ptr=&a;
	printf("%d\n\n",*ptr);
	
	
	//for multiple specified memory allocation
	int *arr=(int *)calloc(5,sizeof(int));
	int i;
	for(i=0;i<5;i++){
		*(arr+i)=i;
	}
	for(i=0;i<5;i++){
		printf("%d\n",*(arr+i));
	}
}
