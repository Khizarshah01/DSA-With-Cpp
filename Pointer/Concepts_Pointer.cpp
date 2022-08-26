#include<iostream>

using namespace std;
//Notes 
/*
 Address of Operator - &
    > Ye '&' Opreator koi bhi Vairable ke address nikal ne ke  liya use hota hai.
    > Is ka syntax ye hai '&_Vairable'.

 Pointer of Operator - *   
    > Pointer Operator address ki value nikal ne ke liya use hota hai.
    > Is ka syntax ye hai '*_Vairable' 

 Pointer Declaration / Creating - *ptr
    > Pointer ko Create kar ne ke liya ye syntax follow hota hai 'Data Type_*_Vairable;' Ex:- 'int *ptr;'.
    > Ek Pointer vairable ke address ko save kar ne ka 8 bytes leta hai. Usko koi fark nahi padta hai vo kon se data _type ka hai . 
    > Mera hisab se double pointer similar hota hai single poisnter ke. Bas confuse kar ne ka liya diya jata hai or ek hi vairable ko double se use kar ne kaliya hota hai.
*/

int main () {

    int num  = 5 ;

    cout << num << endl;

    cout <<" address of num is " << &num << endl;// Ya ha '&' Operator num ka address print kare ga.

    int *ptr = &num;// Ya ha pointer ko create ki ya gaya hai or num ka address '*ptr' ko de diya hai.

    cout << "Address is : " << ptr << endl;// Ya ha ptr ke andar jo num ka address dala gaya tha usko print kiya gaya hai.

    cout << "value is : " << *ptr << endl;// Ya ha ptr ke andar jo num ka adress us address ki value print ki jari hai.

   // How mush bytes taken
    double d = 4.3;

    double *p2 = &d;

    cout << "Address is : " << p2 << endl;

    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;

    cout << " size of pointer is " << sizeof(ptr) << endl;

    cout << " size of pointer is " << sizeof(p2) << endl;

    return 0;

}
