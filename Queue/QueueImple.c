#include <stdio.h>
#define size 2
int queue[size];
int front = 0;
int rear = 0;

void enqueue(int data)
{
    if (rear==size) {
        printf("queue is overflow\n");
    }
    else {
        queue[rear]=data;
        rear++;
    }
}

void dequeue()
{
    if (front==rear) {
        printf("queue is underflow\n");
    }
    else {
        front++;
    }
}

void top()
{
    if(front==rear)
    {
        printf("queue is empty");
    }
    else {
        printf("%d\n",queue[front]);
    }
}

int main(void)
{
    enqueue(4);
    top();
    enqueue(7);
    enqueue(90);
    dequeue();
    top();
    dequeue();
    top();
    dequeue();
    top();
    return 0;
}
