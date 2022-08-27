#include<iostream>
using namespace std;

Count(int m)
{
    //Base case
    if(m==0)
    {
        return 0;
    }
    //>>Tail Recursion<<
   /* cout<<m<<endl;
    Count(m-1);*/
   
    //>>Head Recursion<<
    Count(m-1);
    cout<<m<<endl;
}

int main()
{   
    int n;
    cout<<"Enter a number:";
    cin>>n;
    Count(n);
    return 0;
}