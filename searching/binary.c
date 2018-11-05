#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr[5];//input array
	
	int counter=0;
	int f=0;
	
	
	//input array
	//should be sorted
	int up=4,lo=0,m=(up+lo)/2,i=0,search=0;
	
	//array input 
	for(i=0;i<5;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	
	//searching part
	printf("\nENTER THE ELEMENT TO BE SEARCHED");
	scanf("%d",&search);

	while(up>=lo){
		//first step: to look out for the middle index
		m=(up+lo)/2;
		counter++;
		//second step: comaprison  between search and arr[mid]
		if(search<arr[m]){
			up=m-1;
		}
		else if(search>arr[m]){
			lo=m+1;
		}
		else{
			f=1;
			printf("\nFOUND\n");
			printf("counter:%d\n",counter);
			break;
		}
	}
	if(f != 1){
		printf("not found\n");
		printf("counter:%d\n",counter);
	}
}
