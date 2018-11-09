#include <stdio.h>
#define MAX 20
int arr[MAX];
//here we need front and rear
//front leaves while rear adds
int front=-1;
int rear=-1;
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
	if(rear == MAX-1){
		//OVERFLOW
		printf("OVERFLOW\n");
		return;
	}
	else {
		printf("ENTER THE NUMBER\n");
		int num;
		scanf("%d",&num);
		if(front == -1){
			front = 0;
		}
		arr[++rear]=num;
	}
}

void pop(){
	printf("INSIDE POP\n");
	if(front == -1 || front > rear) //front == -1 is for no elements, front < rear is when the rear is static and many are popped
	{
		//underflow
		printf("UNDERFLOW\n");
		return;
	}
	printf("THE POPPED NUMBER IS %d \n",arr[front++]);
}

void display(){
	printf("INSIDE DISPLAY\n");
	int i;
	for(i=front;i<=rear;i++){
		printf("%d\n",arr[i]);
	}
}
