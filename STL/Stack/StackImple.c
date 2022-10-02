
/*Stack implementation using static array*/

#include<stdio.h>
//Pre-processor macro
#define stackCapacity 5

int stack[stackCapacity], top=-1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void atTop(void);

//Main function of the program
int main(void)
{
    int choice, stackItem;
    //Always true While loop for continue iteration
    while(1){
        //Instructions to the user
        printf("Stack Operation \n");
        printf("Enter `1` for  Push Operation \n");
        printf("Enter `2` for  Pop Operation \n");
        printf("Enter `3` for  atTop Operation \n");
        printf("Enter `4` for  Traverse Operation \n");
        printf("Enter `5` for  Quit Operation \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        //Switch Case to do the user specified task
        switch(choice){
            case 1:
                    printf("Enter a integer value : ");
                    scanf("%d",&stackItem);
                    push(stackItem);
                    break;
            case 2:
                    stackItem = pop();
                    if(stackItem == 0){
                        printf("Your stack is underflow");
                    }else{
                        printf("Last popped item : %d \n", stackItem);
                    }
                    break;
            case 3:
                    atTop();
                    break;
            case 4:
                    traverse();
                    break;
            
            default: printf("Please enter correct choice : ");
        }
        if (choice==5) {
            break;
        }
    }
    return 0;
}

//Push Function to insert element into the stack
void push(int stackElement)
{
    if(isFull()){
        printf("Stack is full.It can't be overflowed. \n");
    }else{
        top++;
        stack[top] = stackElement;
        printf("%d has been pushed \n", stackElement);
    }
}

//Function to check, Is stack full?
int isFull(){
    if(top == stackCapacity-1){
        return 1;
    }else{
        return 0;
    }
}


//Function to check, Is stack empty?
int isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

//Function to pop last element of the stack
int pop(){
    if(isEmpty()){
        return 0;
    }else{
        return stack[top--];
    }
}

//function to check, Which element on the top?
void atTop()
{
    if(isEmpty())
    {
        printf("Your Stack is empty \n");
    }else{
        printf("Element at top is : %d \n", stack[top]);
    }
}

//Function to display the all the characters elements of stack
void traverse(){
    if(isEmpty())
    {
        printf("Your Stack is empty \n");
    }else{
        int i;
        printf("Stack Elements are : \n");
        for(i=0; i <= top; i++){
            printf("%d \n", stack[i]);
        }
    }
}
