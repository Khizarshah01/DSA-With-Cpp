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

//Bubble Sort
void bubbleSort(int arr[], int n)
{
    for(int i = 1; i<n; i++)

    {
        //for round 1 to n-1
        bool swapped = false;
        for(int j =0; j<n-i; j++)
        {
            //process element till n-i th index
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        { 
          //already sorted
            break;
        }
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
    bubbleSort(arr,size);
// ye output deta hai sab hoi bad.
    output(arr,size);
    return 0;
}
