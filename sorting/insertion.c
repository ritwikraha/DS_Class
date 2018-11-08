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

	//sorting algorithm
	for(i=1;i<size;i++){
		hold=arr[i];
		j=i-1;
		while(j>-1 && arr[j]>hold){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=hold;
	}
	for(i=0;i<size;i++){
		printf("\n%d",arr[i]);
	}
}
