#include <stdio.h>
void main(){
	//integer variable created
	int a;
	
	//integer type pointer created
	int *p;
	
	//interger variable value given
	a=10;
	
	//integer pointer address given to link it to a
	p=&a;
	
	printf("ADDRESS OF A=%d\n",&a);
	printf("VALUE OF A=%d\n",a);
	printf("ADDRESS OF P=%d\n",&p);
	printf("VALUE OF P=%d\n",p);
	printf("VALUE OF LINKED VARIABLE FROM P=%d\n\n",*p);
	
	printf("CHECK OUT THE VALUE OF POINTER P AND ADDRESS OF VARIABLE A");
}
