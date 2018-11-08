#include <stdio.h>
#include <stdlib.h>
void main(){
	
	int size;
	printf("ENTER THE SIZE OF THE ARRAY\n");
	scanf("%d",&size);
	int arr[size];//array is created
	
	int counter=0;
	
	
	int f=0,i=0,search=0;
	
	//input array
	for(i=0;i<size;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	
	//searching part
	printf("\nENTER THE ELEMENT TO BE SEARCHED");
	scanf("%d",&search);
	for(i=0;i<size;i++){
		counter++;
		if(arr[i]==search){
			f=1;
			//po=i;
			break;
		}
	}
	if(f==1){
		printf("ELEMENT FOUND\n");
		//printf the position variable that is po
		printf("counter:%d\n",counter);
	}
	else{
		printf("ELEMENT NOT FOUND\n");
		printf("counter:%d\n",counter);
	}
}
