#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr[5];
	//input array
	int f=0,i=0,search=0;
	for(;i<5;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	printf("\nENTER THE ELEMENT TO BE SEARCHED");
	scanf("%d",&search);
	for(i=0;i<5;i++){
		if(arr[i]==search){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("ELEMENT FOUND");
	}
	else{
		printf("ELEMENT NOT FOUND");
	}
}
