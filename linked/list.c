#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node * link;
};
typedef struct node node;
struct list{
	int size;
	node * head;
};
typedef struct list list;
list * createList(){
	list l=(list *)malloc(sizeof(list));
	l->size=0;
	l->head-NULL;
}
void push(list * l,int data){
	node * n=(node *)malloc(sizeof(node));
	n->link=NULL;
	n->data=data;
	if(l->size==0){
		l->head=n;
		l->size++;
	}
	else{
		node * temp;
		temp=l->head;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=n;
	}
}
