#include <stdio.h>
#include <string.h>


typedef struct valueNode {
    int data ;
    struct valueNode *next;
}NODE;


void AddNode(NODE **walk, int newdata) ;
void printList(NODE* walk) ;
void update(NODE*walk , int oldvalue , int newvalue );



int main (){
    struct valueNode *head ;
    head = NULL ;
    AddNode (&head , 10) ;
    AddNode (&head , 20) ;
    AddNode (&head , 30) ;
    AddNode (&head , 40) ;
    printf("Show all Linked list.\n") ;
    printList(head) ;
	printf("Update 10, 90\n");
	printf("-------------------------------------\n") ;
	printf("Update Node between 10 and 90 \n") ;
	update(head, 10, 90) ; 
    printList(head) ;
	printf("-------------------------------------\n") ;
	printf("Update Node between 10 and 98 \n") ;
	update(head, 10, 98) ; 
    printList(head) ;

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

void update(NODE *walk, int oldvalue , int newvalue){
	NODE* current = walk ;
	while (current != NULL){
		if(current->data == oldvalue)
		{
			current->data = newvalue ;
			break ;
		}
		current = current->next ;
	}
}