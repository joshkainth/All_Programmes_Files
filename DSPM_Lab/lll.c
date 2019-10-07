#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}node;
struct node* front = NULL;
struct node* rear = NULL;

int enqueue(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));

    temp->data = x;
    temp->next = NULL;
    if(front==NULL && rear==NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;

    return temp;
    //printf("%d ",temp->data);
    
}

void dequeue(){
    struct node* temp = front;
    if(front==NULL)
        return;
    if(front==rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
}

int main(){
    //struct node* nb;
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    dequeue();
    enqueue(30);
    dequeue();
    dequeue();

    printf("%d ",node.data);
}