// C++ program for unary increment (++) and
// decrement (--) operator overloading

#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:
    // function to get number
    void getNum(int x)
    {
        n = x;
    }
    // function to display number
    void dispNum()
    {
        cout << "value of n is: " << n;
    }
    // unary ++ operator overloading
    void operator++()
    {
        n = ++n;
    }
    // unary -- operator overloading
    void operator--()
    {
        n = --n;
    }
};

int main()
{
    NUM num;
    num.getNum(10);

    ++num;
    cout << "After increment - ";
    num.dispNum();
    cout << endl;

    --num;
    cout << "After decrement - ";
    num.dispNum();
    cout << endl;

    return 0;
}

