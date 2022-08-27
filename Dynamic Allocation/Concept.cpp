#include<iostream>
using namespace std;

/*int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

*/

void update1(int n) {
// Yah & operater use nahi kiya jara hai jis ke karn ek new duplicate value create ki jari hai.
    n++;
}

void update2(int& n) {
// Yah & operater use hora hai jis ke karn original value ke andar change hora hai.
    n++;
    
}

int main() {

    
    int i = 5;

    //create a ref variable 
    
    int& j = i;
    // Ya ha pe 'i' jo hai usko 'j' bhi bol sakte hai kyo ki "int'&' j = i;" use hwa hai 
    // Aisa samj lo i or j ab ek hi hai jo i ke sat ho ga wo j ke sat bhi ho ga.

    cout << i << endl; 
    i++;
    cout << j << endl; 
   // Yaha i ko increament kara gaya or j ke sat bhi vo hi hu wa.   
    j++;
    cout << i << endl; 
       // Yaha j ko increament kara gaya or i ke sat bhi vo hi hu wa.
    cout << j << endl;
    

   int n = 5;
   
   cout << "Before " << n << endl;
   update2(n);
   cout << "After " << n << endl;


 //   fun(n);

    return 0;
}
