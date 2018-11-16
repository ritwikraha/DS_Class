#include <stdio.h>

struct node {
	int data;
	struct node * right;
	struct node * left;
}* root;
//here the root is made before hand

void find(int item,struct node ** loc,struct node ** par){
	struct node * ptr, * ptrsave;
	if(root == NULL){
		//the root being empty, the tree is empty
		*loc = NULL;
		*par = NULL;
		return;
	}
	if(item == root->data){
		//item is at root
		*loc = root;
		*par = NULL;
		return;
	}
	//initialise the ptr and ptrsave
	if(item < root->data){
		//item in left subtree
		ptr = root->left;
	}
	else{
		//item in right subtree
		ptr = root->right;
	}
	ptrsave = root;
	
	while(ptr != NULL){
		if(item == ptr->data){
			//if data is found
			*loc = ptr;
			*par = ptrsave;
			return;
		}	
		//ptr is going to get change so we hold the value before hand
		ptrsave = ptr;
		if(item < ptr->data){
			ptr=ptr->left;
		}
		else{
			ptr=ptr->right;
		}
	}
	//location being null means no item on the location
	*loc = NULL;
	//and parent gets the location od its parent
	*par = ptrsave;
}
void insert(int item){
	struct node * parent, * location, *temp;
	find(item,&location,&parent);
	if(location != NULL){
		//item was found hence we will not insert
		printf("ITEM ALREADY THERE \n");
		return;
	}
	
	//create a node for insertion;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = item;
	temp->left=NULL;
	temp->right=NULL;
	if(parent == NULL){
		root =temp;
	}
	else{
		if(item < parent->data){
			parent->left=temp;
		}
		else{
			parent->right=temp;
		}
	}
}

void inorder(struct node * ptr) {
	if(ptr != NULL){	
		inorder(ptr->left);
		printf("%d \n",ptr->data);
		inorder(ptr->right);
	}
}


void main(){
	root = NULL;
	insert(11);
	insert(10);
	insert(200);
	insert(30);
	insert(400);
	insert(50);
	insert(6);
	insert(5);
	
	inorder(root);	
}
