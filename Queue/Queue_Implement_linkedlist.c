#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;

}*front=NULL,*rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));

    if(t==NULL)
        printf("Queue is Full\n");
    else
    {
        t->data=x;
        t->next=NULL;
        //If it is first node
        if(front==NULL)
            front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }
    }

}

int dequeue()
{
    int x=-1;

    struct Node *t;

    if(front==NULL)
         printf("Queue is Empty\n");
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p=front;
    while(p)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    Display();
    printf("%d ",dequeue());
    return 0;
}
