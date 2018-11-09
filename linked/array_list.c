#include <stdio.h>
#define MAX 20
int arr[MAX];
int size;
void main(){
	while(1){
		int choice;
		printf("1.INPUT\n");
		printf("2.INSERT\n");
		printf("3.DELETE\n");
		printf("4.SEARCH\n");
		printf("5.DISPLAY\n");
		printf("6.QUIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				input();
				break;
			case 2:
				insert();
				break;
			case 3:
				del();
				break;
			case 4:
				search();
				break;
			case 5:
				display();
				break;	
			case 6:
				printf("PROGRAM TERMINATED\n");
				exit(0);
				break;					
		}//end of switch	
	}//end of while	
}//end of main

void input(){
	printf("INSIDE INPUT\n");
	printf("ENTER THE SIZE\n");
	scanf("%d",&size);
	int i;
	for(i=0;i<size;i++){
		printf("ENTER THE ELEMENT\n");
		scanf("%d",&arr[i]);
	}
}

void insert(){
	printf("INSIDE INSERT\n");
	int index,number,i;
	printf("ENTER THE INDEX\n");
	scanf("%d",&index);
	printf("ENTER THE NUMBER\n");
	scanf("%d",&number);
	for(i=size;i>index;i--){
		arr[i]=arr[i-1];
	}
	arr[index]=number;
	size++;
}

void del(){
	printf("INSIDE DELETE\n");
	int index,i;
	printf("ENTER THE INDEX\n");
	scanf("%d",&index);
	for(i=index;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
}

void search(){
	printf("INSIDE SEARCH\n");
	int number,i,f=0;
	printf("ENTER THE NUMBER\n");
	scanf("%d",&number);
	for(i=0;i<size;i++){
		if(arr[i]==number){
			f=1;
			printf("FOUND\n");
			break;
		}
	}
	if(f==0){
		printf("NOT FOUND \n");
	}
}

void display(){
	int i;
	printf("INSIDE DISPLAY\n");
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}

