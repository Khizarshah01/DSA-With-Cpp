#include <stdio.h>
#define size 1
int stack[size];
int top = -1;
void push(int data)
{
    if(size==top)
    {
        printf("overflow stack\n");
    }
    else {
        top++;
        stack[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow stack\n");
    }
    else {
        top--;
    }
}

void pick()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else {
        printf("%d",stack[top]);
    }
}
int main(void)
{
    pop();
    push(5);
    push(7);
    push(39);
    pick();
    return 0;
}
