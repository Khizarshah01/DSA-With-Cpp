#include<iostream>
using namespace std;

void result(int n,string arr[])
{
    // Base Part
    if (n==0)
    {
        return ;
    }
    //Prossesing part
    int digit = n % 10;
    n = n/10;
    
    //Recursion part
    result(n,arr);
    
    //Prossesing part
    cout<<arr[digit]<<"  ";

}

int main()
{
    int n;
    string arr[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout << "Enter a number:";
    cin >>n;
    result(n,arr);
    return 0;
}