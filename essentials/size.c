#include <stdio.h>
void main(){
	
	//szize of datatype
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(double));
	
	//size fo variable
	int a=10;
	printf("%d\n",sizeof(a));
	
	//size of array
	int arr[4]={1,2,3,4};
	printf("%d\n",sizeof(arr));
}
