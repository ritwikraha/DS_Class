#include <stdio.h>
#include <stdlib.h>
void main(){
	int i,j,hold;
	int size;
	printf("ENTER THE SIZE OF THE ARRAY\n");
	scanf("%d",&size);
	int arr[size];//array is created
	
	//input array
	for(i=0;i<size;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<size;i++){
		
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				hold=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=hold;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("\n%d",arr[i]);
	}
}
