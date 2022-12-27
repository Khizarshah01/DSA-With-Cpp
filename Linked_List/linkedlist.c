#include <stdio.h>
#include <stdlib.h>

// create node 
struct Node{
    // node data
    int data;
    //node pointer
    struct Node* next;
};

// insert data front of head 
void insertHead(struct Node** head, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

// insert data end of head
void insertTail(struct Node** head_ref, int new_data) {
    // makeing a new node 
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  // make last struct pointer to find last node 
  struct Node* last = *head_ref; 

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }

// finding last node to insert node at end
  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}

// print linked list
void print(struct Node* head)
{
    while (head!=NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
    
}

// main program
int main(void)
{
    struct Node* head =  (struct Node*)malloc(sizeof(struct Node));
    head -> data = 5;
    // send node as a refrence
    insertHead(&head,3);
    insertTail(&head,8);
    insertTail(&head,9);
    insertTail(&head,7);
    insertHead(&head,1);
    insertHead(&head,0);
    print(head);
    
    return 0;
}
