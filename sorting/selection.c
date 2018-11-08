#include <stdio.h>
#include <stdlib.h>
void main(){

	int i,j,hold,temp;

	//array of 5 elements
	int arr[5];
	
	//input array
	for(i=0;i<5;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	
	//sorting part
	for(i=0;i<5;i++){
		//temporary storage hold variable
		hold=arr[i];
		
		for(j=i+1;j<5;j++){
			if(hold>arr[j]){
				temp=arr[j];
				arr[j]=hold;
				arr[i]=temp;
				hold=arr[i];
			}
		}
	}
	for(i=0;i<5;i++){
		printf("\n%d",arr[i]);
	}
}
