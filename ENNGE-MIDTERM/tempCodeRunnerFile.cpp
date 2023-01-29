#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct valueNode {
    int data ;
    struct valueNode *next;
}NODE;


void AddNode(NODE **walk, int newdata) ;
void printList(NODE* node) ;
void swapNode(struct valueNode** walk) ;



int main (){
    struct valueNode *head,*now ;
    head = NULL ;
    AddNode (&head , 10) ;
    AddNode (&head , 20) ;
    AddNode (&head , 30) ;
    AddNode (&head , 40) ;
    printf("Print ur Linked List.\n") ;
    printList(head);
    swapNode(&head , 20 ,30 ) ;

    return 0;
}


void AddNode(NODE **walk, int new_data){
	while( (*walk) != NULL ){
        walk = &(*walk)->next;
    }
    *walk = new struct valueNode ;
    (*walk)->data = new_data ;
    (*walk)->next = NULL ;

}

void printList(NODE* node){
    NODE* temp = node ;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
    printf("\n");
}

void swapNode(NODE **walk,int x ,int y){
    while (*walk != NULL){
        if((*walk)->data == x ){
            (*walk)->data = y ;
        }
        if((*walk)->data == y){
            (*walk)->data = x ;
        }
        (*walk) = (*walk)->next ;
    }
}