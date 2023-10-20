#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct node* next;
};


void linked_list_traversal(struct Node* head){
    struct Node* ptr=head;
    do
    {
        printf("ELEMENTS: %d \n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
}


struct Node* insertfirst(struct Node* head,int data){
    struct Node*ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node* p=head->next;
   while(p->next!=head){
    p=p->next;
   }
  p->next=ptr;
  ptr->next=head;
  head=ptr;
 return head;
}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    head=((struct Node*)malloc ( sizeof(struct Node)));
    second=((struct Node*)malloc ( sizeof(struct Node)));
    third=((struct Node*)malloc ( sizeof(struct Node)));
    fourth=((struct Node*)malloc ( sizeof(struct Node)));


    head->data=12;
    head->next=second;

    second->data=23;
    second->next=third;

    third->data=40;
    third->next=fourth;

    fourth->data=54;
    fourth->next=head;
    
    printf("linked list before insertion: \n");
    linked_list_traversal(head);
     
   
     head=insertfirst(head,62);
     printf("linked list after insertion: \n");
     linked_list_traversal(head);
    return 0;
}


