#include <stdio.h>
#include <stdlib.h>
void main(){
	int i,j,hold;
	//made an array of 5 elements
	int arr[5];
	
	//input array
	for(i=0;i<5;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<5;i++){
		
		for(j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
				hold=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=hold;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("\n%d",arr[i]);
	}
}
