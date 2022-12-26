#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

int main(void)
{
    struct Node* node1 = NULL;
    node1 = (struct Node*)malloc(sizeof(struct Node));
    node1 -> data = 5;
    printf("%d",node1->data);

    return 0;
}
