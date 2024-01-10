#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* temp = NULL;
struct node* top = NULL;

void Push(int x){
	struct node* eleman = (struct node *)malloc(sizeof(struct node*));
	eleman->data = x;
	if(top == NULL){
		top = eleman;
		top->link = NULL;
	}
	else{
		eleman->link = top;
		top = eleman;
	}
}

void Pop(){
	if(top == NULL)
	printf("stack bos");
	
	else{
		temp = top->link;
		free(top);
		top = temp; 
	}	
}

void Print(){
	if(top == NULL)
	printf("\n stack bos");
	
	else{
		temp = top;
		while(temp->link != NULL){
			printf("\n %d ",temp->data);
			temp = temp->link;
		}
		printf("\n %d",temp->data);
	}
}
h

int main(){
	Push(4);
	Push(77);
	Push(88);
	Push(99);
	Push(5);
	Pop();
	Print();
	
	return 0;
}