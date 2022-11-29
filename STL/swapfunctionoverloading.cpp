#include <iostream>
using namespace std;

void swa(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void swa(float &a, float &b)
{
    float t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 5, b = 10;

    cout << "Before swap a = " << a << " b = " << b << endl;
    swa(a,b);
    cout << "After swap a = " << a << " b = " << b << endl;

    float x = 10.5, y = 5.5;
    cout << "Before swap x = " << x << " y = " << y << endl;
    swa(x,y);
    cout << "After swap x = " << x << " y = " << y << endl;

    return 0;
}
