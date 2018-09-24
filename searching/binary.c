#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr[5];
	//input array
	//should be sorted
	int up=4,lo=0,m=(up+lo)/2,i=0,search=0;
	for(;i<5;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}
	printf("\nENTER THE ELEMENT TO BE SEARCHED");
	scanf("%d",&search);
	while(up>=lo){
		m=(up+lo)/2;
		if(search<arr[m]){
			up=m-1;
		}
		else if(search>arr[m]){
			lo=m+1;
		}
		else{
			printf("\nFOUND");
			break;
		}
	}
}
