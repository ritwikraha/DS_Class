#include <stdio.h>
#include <stdlib.h>
void main(){
	int i,j,hold;

	//the array of 5 elements
	int arr[5];

	//input array
	for(i=0;i<5;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}

	//sorting algorithm
	for(i=1;i<5;i++){
		hold=arr[i];
		j=i-1;
		while(j>-1 && arr[j]>hold){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=hold;
	}
	for(i=0;i<5;i++){
		printf("\n%d",arr[i]);
	}
}
