#include<iostream>

using namespace std;

int main () {

    //pointer to int is created, and pointing to some garbage address

    int *p ;// Is thara declare kar na noob ki nishani hai or is thara job kya chaprasi ki nokri bhi nahi mila gi.
    
    cout << *p << endl;

    // Sahi tarika ye hai declare kar ne ka kya wo pointer me kuch na kuch value declare kar di jai.
    //Example:- 1st

    int *k = 0;
    int l = 9;

    k = &l;

    cout << k << endl;

    cout << *k << endl;
    
    //Examole:- 2nd

    int i = 5;
    int *q = &i;

    cout << q << endl;

    cout << *q << endl;



   int num = 5;

   int a = num;

   cout << "a before " << num << endl;
   a++;
   cout << "a after " << num << endl;

// Ya ha pointer ke jarya num ki value ko change kiya jara hai.

   int *ptr = &num;

   cout << "before " << num << endl;

   (*ptr)++;//'*' is opretar ka matlab hota hai ptr ke andar jis ki se bhi vairable ka address pada hai us ke andar change kara ja sak ta hai. 

   cout << "after " << num << endl;


    //copying a pointer



   int *r = ptr;

   cout << ptr <<" - " << r << endl;

   cout << *ptr <<" - " << *r << endl;

   //important concept

   int j = 3;

   int *t = &j;

   //cout <<  (*t)++ << endl;

   *t = *t +1;

    cout << *t << endl;

    cout << " before t " << t << endl;

    t = t + 1;

    cout << " after t " << t << endl;

    return 0;

}
