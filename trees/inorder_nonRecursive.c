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
	
//	struct node * root = createNode(1);
//	root->left=createNode(2);
//	root->left->left=createNode(3);
//	root->left->right=createNode(4);
//	root->left->right->left=createNode(5);
//	root->right=createNode(6);
//	root->right->right=createNode(7);
//	root->right->right->right=createNode(8);
	
	
	inorder(root);
}

void inorder(struct node * ptr){
	//ptr is root
	while((top != -1) || (ptr != NULL)){
		if(ptr != NULL){
			push(ptr);
			//pushed current pointer
			ptr=ptr->left;
			//pointer points left
		}
		else{
			//if current is null,pop node go to right
			ptr=pop();
			printf("%d\n",ptr->data);
			ptr=ptr->right;
			//goes to right
			
		}
	}	
}


