#include <stdio.h>
# define size 100
void Enqueue();
void Dequeue();
void Display();
int Exit();
int arr[size];
int rear=-1;
int front=-1;

int main(){

    int ch;
    while (ch!=4) {
        printf("1->Enqueue Operation\n");
        printf("2->Dequeue Operation\n");
        printf("3->Display the Queue\n");
        printf("4->Exit\n");
        printf("Enter your choice of Operation\n");
        scanf("%d",&ch);

        switch (ch) {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                ch = Exit();
                break;
            default:
                printf("You Enrter wrong choice please re-enter\n");
        }
    }
    return 0;
}
    int Exit(){
        return 4;
    }
    void Enqueue()
    {
        int ele;
        if (rear == size-1) 
            printf("Overflow\n");
        
        else
        {
           // if (front == -1) 

            front = 0;
            printf("Element to be inserted in the Queue:\n");
            scanf("%d",&ele);
            rear =rear+1;
            arr[rear] = ele;
        }
    }
void Dequeue()
{
    if(front == -1 || front > rear){
        printf("Underflow\n");
        return;
    }
    else {
        printf("Element deleted from the Queue:%d\n",arr[front]);
        front = front + 1;
    }
}

void Display()
{
    if (front == -1 )
        printf("Queue Emptty");
    else
    {

        printf("\n\n\nQueue\n");
        for (int i = front ; i <=rear; i++) {
            printf("%d\n",arr[i]);
        }
        printf("\n");
    }
}
