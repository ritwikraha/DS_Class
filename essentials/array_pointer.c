#include <stdio.h>
void main(){
	//array of 5 integer elements created
	int arr[5]={1,2,3,4,5};
	
	//arr is a pointer pointing to the arr[0] elelment
	printf("value of arr %d\n",arr);
	printf("address of arr[0] %d\n",&arr[0]);
	
	printf("CHECKOUT THAT THE LOCATION OF arr[0] IS SAME AS THAT OF arr, HENCE PROVES arr IS A POINTER");
}
