#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct node* next;
};

void linked_list_traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("ELEMENTS: %d  \n",ptr->data);
        ptr=ptr->next;

    }
 }
// case:1 deleting first node 
struct Node* deletefirst(struct Node*head){
    struct Node* p=head;
    head=head->next;
    free(p);

    return head;
}

//case:2  deleting from the given index 

struct Node* deleteindex(struct Node* head ,int index){
    struct Node* p=head;
    struct Node* q=head->next;
    
    for( int i=0 ; i<index-1;i++) {
       p=p->next;
       q=q->next;
    }
   p->next=q->next;
   free(q);
return head;
}


//case:3  deleting the last element 
 struct Node* deletelast(struct Node* head){
   struct Node* p=head;
    struct Node* q=head->next;
   
   while(q->next!=NULL){
    p=p->next;
       q=q->next;
   }
 
  p->next=NULL;
  free(q);

  return head;
}

//case:4  delete a node with given particular value

struct Node * deletevalue(struct Node*head, int value){
       struct Node* p=head;
    struct Node* q=head->next;

    while(q->data!=value && q->next!=NULL){
        p=p->next;
       q=q->next;
    }
   if(q->data==value){
    p->next=q->next;
    free(q);
    }
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
    fourth->next=NULL;
    
    printf("linked list before deletion: \n");
    linked_list_traversal(head);
     
    //head=deletefirst(head);
    // head=deleteindex(head,2);
     //  head=deletelast(head);
     head=deletevalue(head,54);

     printf("linked list after deletion: \n");
     linked_list_traversal(head);
    return 0;
}

