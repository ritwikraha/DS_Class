#include <stdio.h>
#define N 20
struct node * stack[N];
int top=-1;

struct node{
	int data;
	struct node * left;
	struct node * right;
};

void push(struct node * ptr){
	if(top == N-1){
		//OVERFLOW
		printf("OVERFLOW\n");
		return;
	}
	stack[++top]=ptr;
}

struct node * pop(){
	if(top == -1)
	{
		//underflow
		printf("UNDERFLOW\n");
		return;
	}
	return stack[top--];
}
struct node * createNode(int data){
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void main(){
	struct node * root = createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	//      1
	//  2       3
	//4  5  null  null 
	
	postorder(root);
}

void postorder(struct node * ptr){
	struct node * temp;
	while((top != -1) || (ptr != NULL)){
		if(ptr != NULL){
			//push into stack and point left
			push(ptr);
			ptr=ptr->left;
		}
		else{
			//check if right present
			temp=stack[top]->right;
			if(temp == NULL){
				//if right not present, pop node and check
				temp=pop();
				printf("%d\n",temp->data);
				while((top != -1) && (temp == stack[top]->right)){
					//check while stack is not empty, and current pointer points right of top of stacks
					temp=pop();
					printf("%d\n",temp->data);
				}
			}
			else{
				//if right present point to right
				ptr=temp;
			}
		}
	}
}


