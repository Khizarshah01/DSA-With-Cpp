#include<iostream>
using namespace std;

void maxi() {

}
int main()
{
    int arr[100];
    int max;
    max=INT_MIN;
    int n=0;
    int i;
    cout <<"Enter a number";
    cin >> n;
    for(i=0; i<n; i++)
    { cout << "-";
    cin >> arr[i];
    }
    
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
cout << max;
    return 0;
}