
#include <stdio.h>
// A function to implement swap
void swap(int* a,int* b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
// A function to implement bubble sort

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j],&arr[j + 1]);
}
 
// Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

// Function to scan an array 
void scanArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        scanf("%d ",&arr[i]);
    printf("\n");
}
 
// Driver code
int main()
{

    int arr[100]; //= { 64, 34, 25, 12, 22, 11, 90 };
    int N ;
    printf("Enter how much numer you want in array:\n");
    scanf("%d",&N);
    N=N+1;
    scanArray(arr, N);
    bubbleSort(arr, N);
    printf("Sorted array: \n");
    printArray(arr, N);
    return 0;
}