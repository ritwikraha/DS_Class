#include <stdio.h>
void main(){
	//creating an array
	int arr[5]={1,2,3,4,5};
	
	//printing an array
	int i;
	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	
	
	//creating an array from user
	int size;
	printf("ENTER THE SIZE OF ARRAY\n");
	scanf("%d",&size);
	int array[size];
	
	//input of array
	for(i=0;i<size;i++){
		printf("ENTER ELEMENTS\n");
		scanf("%d",&array[i]);
	}
	//printing the array
	for(i=0;i<size;i++){
		printf("%d\n",array[i]);
	}
}
