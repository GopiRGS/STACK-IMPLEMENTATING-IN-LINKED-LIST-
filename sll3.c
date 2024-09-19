#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};
struct node *head;
void push(){
    int val;
    struct node *ptr =(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("\n under flow...");
    }
    else{
        printf("enter the value ..");
        scanf("%d",&val);
        if(head==NULL){
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else{
            ptr->val=val;
            ptr->next=head;
            head=ptr;

        }
        printf("\nitem pushed...\n");
    }
}
void pop(){
    int item;
    struct node * ptr;
    if(head==NULL){
        printf("under flow");
    }
    else{
        item=head->val;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("\nitem poped\n");
    }


}
void show(){
    int i;
    struct node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("it will be empty.....");
    }
    else{
        printf("\nprinting the stack elements ....");
        while(ptr!=NULL){
            printf("%d\n",ptr->val);
            ptr=ptr->next;
        }
    }
}
int main(){
    push();
    push();
    push();
    pop();
    show();
}
