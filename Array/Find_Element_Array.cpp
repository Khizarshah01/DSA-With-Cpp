#include<iostream>
using namespace std;

void input(int arr[],int size)
{
//size=size-1;
    for(int i = 0; i < size; i++)
    {
        cout << "-";
        cin >> arr[i];
    }
}

int com(int arr[],int size,int x,int m)
{

    for(int i = 0; i < size; i++)
    {
        //arr[i]=arr[i+1];
        if(x==arr[i])
        {
            m=1;
            cout << "The position is " << i+1 << " and value is " << x;
        }
        m=0;
    }
    return m;
}

void output(int arr[],int size)
{
//size=size-1;
    for(int i = 0; i < size; i++)
    {
        cout << " ";
        cout << arr[i];
    }
}

int main()
{
    int arr[100];
    int size,x,m;
    
    cout << "Enter a number: ";
    cin >> size;
    
    input(arr,size);
    
    cout << "Which number you want to find in list:";
    cin >> x;
    
    com(arr,size,x,m);
    
    //output(arr,size);
    
    if(m==0)
    {
        cout << "The element are not in list";
    }

    return 0;
}