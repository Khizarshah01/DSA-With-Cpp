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

void output(int arr[],int size)

{

//size=size-1;

    for(int i = 0; i < size; i++)

    {

        cout << " ";

        cout << arr[i];

    }

}

//Main function

void Search(int arr[],int size,int x)

{

    int start=0;

    int end=size;

    int ans,mid;

    for(int i=0; mid==x; i++)

    {

        mid=(start+end)/2;

            if(arr[mid]>x)

        {

            end=mid-1;

        }

        if(arr[mid]<x)

            {

                start=mid+1;

            }

        if(arr[mid]==x)

            {

                ans=mid;

            }

    }

    cout << x << " index number is " << ans;

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

    Search(arr,size,x);

    return 0;

    }
