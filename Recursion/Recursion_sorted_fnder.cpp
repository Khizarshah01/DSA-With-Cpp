#include<iostream>
using namespace std;

bool sor(int arr[],int s)
{
    if(s==0 || s==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else
    {    
    bool remain=sor(arr+1,s-1);
    return remain;
    }
}

int main()
{
    int arr[5] = {1,3,4,5,6};
    int s=5;
    bool ans=sor(arr,s);
    if(ans)
    {
        cout<<"Sorted array";
    }
    else
        cout<<"Not sorted";
    return 0;
}