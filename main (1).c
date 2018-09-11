/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};

void Append(struct Node **head, int newdata)
{
    struct Node *temp= (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head; 
    temp->next=NULL;
    temp->data=newdata;
    if (*head == NULL)
    {
        *head=temp;
        return;
    }
    while(last->next != NULL)
        last=last->next;
    last->next=temp;
    return;
}
void reverselinkedlist(struct Node **head)
{
    struct Node *prev=NULL;
    struct Node *current = *head;
    struct Node *next=NULL;
    while(current != NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
} 

int main()
{
    struct Node *head=NULL;
    Append(&head,8);
    Append(&head,10);
    Append(&head,12);
    Append(&head,13);
    printList(head);
    reverselinkedlist(&head);
    printList(head);
    return 0;
}
