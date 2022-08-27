#include<iostream>
using namespace std;

table(int m,int i)
{
    if(i==11)
    {
        return 1;
    }
    cout<<m<<"x"<<i<<"="<<m*i<<endl;
    i++;
    return table(m,i);
}

int main()
{
    //cout<<"Hello World";
    int n;
    int i=1;
    cout<<"Enter a number:";
    cin>>n;

    table(n,i);
    return 0;
}