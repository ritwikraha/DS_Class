#include <stdio.h>
#include <malloc.h>
int i;
struct node{
	int info;//this member is the information part of node
	struct node * link;//this member is the link part of node
} *last;
//the structure has been made
//start is a pointer variable created
//which can only point to a structure type data
void main(){
	last=NULL;
	while(1){
		int choice,number_nodes,data;
		printf("1.CREATE LIST\n");
		printf("2.ADD\n");
		printf("3.DELETE\n");
		printf("4.DISPLAY\n");
		printf("5.QUIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("ENTER NUMBER OF NODES\n");
				scanf("%d",&number_nodes);
				for(i=0;i<number_nodes;i++){
					printf("ENTER DATA\n");
					scanf("%d",&data);
					create_list(data);
				}
				break;
			case 2:
				addition();
				break;
			case 3:
				//element wise deletion
				printf("ENTER ELEMENT TO BE DELETED\n");
				int num;
				scanf("%d",&num);
				del(num);
				break;
			case 4:
				display();
				break;
			case 5:
				printf("PROGRAM TERMINATED\n");
				exit(0);
				break;
											
		}//end of switch	
	}//end of while
}//end of void

void create_list(int data){
	struct node* newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	newNode->link=NULL;
	if(last == NULL){
		//the list is empty
		last=newNode;
		newNode->link=last;
	}//end of if
	else{
		newNode->link=last->link;
		last->link=newNode;
		last=newNode;
		
	}//end of else
}//end of create_list

void addition(){
	int index,data;
	struct node* newNode=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=last->link;
	printf("ENTER THE INDEX\n");
	scanf("%d",&index);
	printf("ENTER THE DATA\n");
	scanf("%d",&data);
	newNode->info=data;
	struct node * temp=last;
	if(index == 0){
		last->link=newNode;
		newNode=ptr;
	}
	else{
		for(i=0;i<index-1;i++){
			ptr=ptr->link;
		}
		newNode->link=ptr->link;
		ptr->link=newNode;
	}
}

void display(){
	struct node * ptr= last->link;
	while(ptr != last){
		printf("-->%d ",ptr->info);
		ptr=ptr->link;
	}	
	printf("-->%d ",ptr->info);
	printf("\n");	
}

void del(int num){
	struct node * temp;
	struct node * ptr;
	if(last->link==last && last->info==num){
		//deleting the only element there is
		temp=last;
		last=NULL;
		free(temp);
		return;
	}
	ptr=last->link;
	if(ptr->info == num){
		//first element
		temp=ptr;
		last->link=ptr->link;
		free(temp);
		return;
	}	
	while(ptr->link != last){
		if(ptr->link->info == num){
		//first element
		temp=ptr->link;
		ptr->link=temp->link;
		printf("DELETED ELEMENT %d\n",temp->info);
		free(temp);
		return;
		}
		ptr=ptr->link;	
	}
	if(ptr->link->info == num){
		//for last deletion
		temp=last;
		ptr->link=last->link;
		printf("DELETED ELEMENT %d\n",temp->info);
		free(temp);
	}
}//end of display

