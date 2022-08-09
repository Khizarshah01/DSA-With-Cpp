#include<iostream>

using namespace std;

int main()

{

    int arr[100];

    int n,j;

    int i=0;

   

    cout << "Enter a number-";

    cin >> n;

    for(i=0; i<n; i++)

    {

        cout << " ";

        cin >> arr[i];

    }

  

    for(i=0; i<n; i++)

    {

        if(arr[i]!=0)

        {

            swap(arr[i],arr[j]);

            j++;

        }

    } 

    for(i=0; i<n; i++)

    {

        cout << "  ";

        cout << arr[i];

    }

    return 0;

}
