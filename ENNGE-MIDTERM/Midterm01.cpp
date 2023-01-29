#include <stdio.h>
#include <string.h>


typedef struct valueNode {
    int data ;
    struct valueNode *next;
}NODE;


void AddNode(NODE **walk, int newdata) ;
void printList(NODE* node) ;
void showback(struct valueNode** walk) ;


int main (){
    struct valueNode *head,*now ;
    head = NULL ;
    AddNode (&head , 10) ;
    AddNode (&head , 20) ;
    AddNode (&head , 30) ;
    AddNode (&head , 40) ;
    printf("Show all link list.\n") ;
    printList(head);
    showback(&head);
    printf("---------------------------------------------------------------------------------------------\n") ;
    printf("Show all showback link list. \n") ;
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

void showback(struct valueNode** walk){
    struct valueNode* prev = NULL ;
    struct valueNode* current = *walk ;
    struct valueNode* next = NULL ;
        while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        }
        (*walk) = prev;
}

