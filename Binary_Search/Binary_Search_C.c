#include <stdio.h>;
#include <stdlib.h>;

int BinarySearch(int arr[], int l, int key){
    int start = 0;
    int end = l-1;
    int mid;
    while(start <= end){
        mid = start + (end - start) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid+1;
        else end = mid-1;
    }
    return -1;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d", BinarySearch(a, 5, 2));
}