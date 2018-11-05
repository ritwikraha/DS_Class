#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr[5];//array is created
	
	int counter=0;
	
	
	int f=0,i=0,search=0;
	
	//input array
	for(i=0;i<5;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	
	//searching part
	printf("\nENTER THE ELEMENT TO BE SEARCHED");
	scanf("%d",&search);
	for(i=0;i<5;i++){
		counter++;
		if(arr[i]==search){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("ELEMENT FOUND\n");
		printf("counter:%d\n",counter);
	}
	else{
		printf("ELEMENT NOT FOUND\n");
		printf("counter:%d\n",counter);
	}
}
