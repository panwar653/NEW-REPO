#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;

};

void linked_list_traversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("ELEMENTS: %d \n",ptr->data);
        ptr=ptr->next;
    }
}

//case:1  inserting at beginning 

struct Node* insert_at_beginning(struct Node*head,int data){
    struct Node*ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
 
//case:2  insert node in between

struct Node* insert_at_index(struct Node*head,int data,int index){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
     int i=0;
    while(i!=index-1){
          p=p->next;
          i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

return head;
}

//case:3  insertion at the end

struct Node* insert_at_end(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
     struct Node* p=head;
     ptr->data=data;
     while(p->next!=NULL){
        p=p->next;
     } 
    p->next=ptr;
    ptr->next=NULL;
    return head;

}


//case:4   insert after a node 

struct Node* insert_after_a_node(struct Node*head,struct Node* prevnode,int data){
struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));

ptr->data=data;
ptr->next=prevnode->next;
prevnode->next=ptr;
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
    
    printf("linked list before insertion:\n");
    linked_list_traversal(head);
    //head=insert_at_beginning(head,11);
     //head=insert_at_index(head,56,3);
     //head=insert_at_end(head,99);
     head=insert_after_a_node(head,third,100);

    printf("linked list after insertion: \n");
    linked_list_traversal(head);
     

    return 0;
}
