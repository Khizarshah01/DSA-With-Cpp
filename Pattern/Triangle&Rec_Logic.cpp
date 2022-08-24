#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int i=1;
    char k='A';
 
    while(i<=n)
    {
        int j=1;
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        
        }
        
        while(j<=i)
        {
    // Triangle ka liya bas "k" vairable ke aga (<<" ") ye dal na padta hai
            cout<<k;
            k=k+1;
            j=j+1;
            
        }

        cout<<""<<endl;
        i=i+1;
       
    }   
return 0;
}