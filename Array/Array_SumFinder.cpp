#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int i,j,n,k,l,s,r=0;
    cout << "Ener a number:";
    cin >> n;
    cout << "Which number of sum you want:";
    cin >> s;
    for(i=0; i<=(n-1); i++)
    {
        cout << "-";
        cin >>arr[i];
    }
    for(j=0; j<=(n-1); j++)
    {
        for(l=0; l<=(n-1); l++)
        {
            if(arr[j] + arr[l] == s)
            {
                arr[l] = -527273;
                r=r+1;
                // cout << r;
            }
        }
    }
    cout << r;
    return 0;
}