#include <stdio.h>
#include <stdbool.h>
void main(){
	int n=5;
	int start=0,end=n-1;
	int arr[]={5,-4,3,200,1};
	quick(arr,start,end);
	disp(arr,n);
}

void disp(int arr[],int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}

void quick(int arr[],int start, int end){
	bool placed= false; // this is used to determine whether the pivot has been placed in the correct place
	int left=start;
	int right=end;
	int temp=0;
	int pivot=start; // taking the pivot's index to be the first element
	if(left>=right){
		//this means that the array has no elements to traverse
		return;
	}
	while(!placed){
		//compare from right to left
		while(arr[pivot] < arr[right] && pivot != right){
			//when value at pivot is less and the right index is not pivot go on decreasing right index
			right--;
		}
		if(right == pivot){
			//that means the pivot is placed properly
			placed=true;
		}
		if(arr[pivot] > arr[right]){
			//the value at pivot is greater than right value hence swapping required
			temp=arr[pivot];
			arr[pivot]=arr[right];
			arr[right]=temp; //till here swapping was done
			pivot=right;//here the pivot location has been changed
		}
		
		//compare from left to right
		while(arr[pivot] > arr[left] && pivot !=left){
			left++;
		}
		if(right == pivot){
			//that means the pivot is placed properly
			placed=true;
		}
		if(arr[pivot] < arr[left]){
			//the value at pivot is smaller than left value hence swapping required
			temp=arr[pivot];
			arr[pivot]=arr[left];
			arr[left]=temp; //till here swapping was done
			pivot=left;//here the pivot location has been changed
		}
	}//end of while
	
	quick(arr,start,pivot);
	quick(arr,pivot+1,end);
}
