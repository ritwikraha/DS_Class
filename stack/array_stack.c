#include <stdio.h>
#define MAX 20
int arr[MAX];
int top=-1;
void main(){
	int choice;
	while(1){
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.DISPLAY\n");
		printf("4.QUIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
		}
	}
}

void push(){
	printf("INSIDE PUSH\n");
	int num;
	if(top == MAX-1){
		//OVERFLOW
		printf("OVERFLOW\n");
		return;
	}
	printf("ENTER THE ELEMENT\n");
	scanf("%d",&num);
	arr[++top]=num;
}

void pop(){
	printf("INSIDE POP\n");
	if(top == -1)
	{
		//underflow
		printf("UNDERFLOW\n");
		return;
	}
	printf("THE POPPED NUMBER IS %d \n",arr[top--]);
}

void display(){
	printf("INSIDE DISPLAY\n");
	int i;
	for(i=top;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}
