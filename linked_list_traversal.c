#include<stdio.h>
#include<stdlib.h>
 
 struct Node {
    int data;
    struct Node *next;
 };

 void linked_list_traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("ELEMENTS: %d  \n",ptr->data);
        ptr=ptr->next;

    }
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
    

    linked_list_traversal(head);

    return 0;
    return 1;
}