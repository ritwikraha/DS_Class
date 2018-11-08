#include <stdio.h>

void main(){
	//making an integer type pointer
	int *p;
	
	//checking for the size of integer type variable
	int check=sizeof(int);
	
	//memory allocate an integer variable's memory
	p=(int *)malloc(check);
	
	//use the location properly
	int a=10;
	p=&a;
	printf("%d",*p);
}
