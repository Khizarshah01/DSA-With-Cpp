#include<iostream>
using namespace std;

void swap(int arr[],int size)
{
    int i;
    for(i=0; i<size; i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int s,arr[100],i;
    cout << "Enter a number:";
    cin >> s;

    for(i=0; i<s; i++)
    {
        cin >> arr[i];
    }

    swap(arr, s);

    for(i=0; i<s; i++)
    {
        cout << arr[i];
    }
    return 0;
}