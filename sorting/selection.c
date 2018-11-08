#include <stdio.h>
#include <stdlib.h>
void main(){

	int i,j,hold,temp;

	int size;
	printf("ENTER THE SIZE OF THE ARRAY\n");
	scanf("%d",&size);
	int arr[size];//array is created
	
	//input array
	for(i=0;i<size;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	
	//sorting part
	for(i=0;i<size;i++){
		//temporary storage hold variable
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("\n%d",arr[i]);
	}
}
