#include <stdio.h>
struct node {
	int data;
	struct node * left;
	struct node * right;
};

struct node* createNode(int data){
	struct node * newNode=(struct node*)malloc(sizeof(struct node));
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
	
	inOrder(root);
}


void inOrder(struct node * ptr) {
	if(ptr != NULL){	
		inOrder(ptr->left);
		printf("%d \n",ptr->data);
		inOrder(ptr->right);
	}
}
