#include <stdio.h>
#include <string.h>

typedef struct valueNode {
    int data ;
    struct valueNode *next;
}NODE;


void AddNode(NODE **walk, int newdata) ;
void printList(NODE* walk) ;
void swapNode(NODE** walk,int x , int y) ;



int main (){
    struct valueNode *head ;
    head = NULL ;
    AddNode (&head , 10) ;
    AddNode (&head , 20) ;
    AddNode (&head , 30) ;
    AddNode (&head , 40) ;
    printf("Show all Linked list.\n") ;
    printList(head) ;
    printf("SwapNode Linked List.\n") ;
    swapNode(&head , 20 , 30  ) ;
    printList(head);
    printf("----------------------------------------------------------\n");
    printf("Show all Linked list.\n") ;
    printList(head) ;
    printf("SwapNode Linked List.\n") ;
    swapNode(&head , 40 , 10  ) ;
    printList(head);

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

void printList(NODE* walk){
    NODE* temp = walk ;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
    printf("\n");
}

void swapNode(NODE **walk, int x , int y ){
    NODE*temp = *walk;
    int num = 0 ;
    while(temp != NULL) {
         if(temp->data == x ){
            num++ ;
        }
        else if(temp->data == y){
            num++ ;
        }
        temp = temp->next ;
    }
    if(num != 2)return ;

    while (*walk != NULL){
        if((*walk)->data == x ){
            (*walk)->data = y ;
        }
        else if((*walk)->data == y){
            (*walk)->data = x ;
        }
        walk = &(*walk)->next ;
        
    }

}