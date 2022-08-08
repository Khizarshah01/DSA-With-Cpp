#include<iostream>
using namespace std;

void input(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "-";
        cin >> arr[i];
    }
}

void output(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << " ";
        cout << arr[i];
    }
}

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++ )
    {
        // ye minIndex me array ki 0 index value aja ti or wo usko min.. man ta .
        int minIndex = i;

        for(int j = i+1; j<n; j++)
        {
            // ham yha ye check kar te kya array me koi minIndex se chota element hai ya nahi.
            if(arr[j] < arr[minIndex])
                // agar koi element chota hota hai to usk value minIndex me dal deta.
                minIndex = j;
        }
        // array check kar ne ka bad jo element sab se chota hota hai usko swap kar ke sahi positon pe la le ta.
        swap(arr[minIndex], arr[i]);
    }
}
//Main function
int main()
{
    int arr[100];
    int size,x,m;
// Size bole to array ko kha tak katam kar na hai wo hota hai.
    cout << "Enter a number: ";
    cin >> size;
// Input lene ka liya hai ye function . element save hote array me is se.
    input(arr,size);
// Ye slection sor hai jo array ko increasing sort me convet kar deta hai.
    selectionSort(arr,size);
// ye output deta hai sab hoi bad.
    output(arr,size);
    return 0;
}
