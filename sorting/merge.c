#include <stdio.h>
void main(){
	int n=5;
	int arr[5]={5,10,-3,88,1000};
	int start=0;
	int end= n-1;
	divide(arr,start,end);
	print_arr(arr,n);
}
void divide(int arr[],int start,int end){
		if(start == end){
			//this is the base case
			return;
		}
		else{
			int mid= (start +end)/2;
			//this is used to divide the left array until it gets into individual pieces
			divide(arr,start,mid);
			//this is used to divide the right array until it gets into individual pieces
			divide(arr,mid+1,end);
			//then we merge the two arrays
			conquer(arr,start,end);
		}
}

void conquer(int arr[],int start,int end){
	//here is the sorting and merging
	//create a temporary array
	int mid=(start+end)/2;
	int temp[end-start+1];
	int i=start,j=mid+1;
	int k=0;
	//i is the index of the left half
	//j is the index of the right half
	while(i<=mid && j<=end){
		if(arr[i] < arr[j]){
			//the temp gets left array values
			temp[k++]=arr[i++];
		}
		else{
			//the temp gets right array values
			temp[k++]=arr[j++];
		}
	}
	while(i <= mid){
		//if i is not done
		temp[k++]=arr[i++];
	}
	while(j <= end){
		//if j is not done
		temp[k++]=arr[j++];
	}
	for(i=0;i<k;i++){
		arr[start+i]=temp[i];
	}
}

void print_arr(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
