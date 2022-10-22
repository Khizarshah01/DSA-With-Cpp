#include <iostream>
#include <string>
using namespace std;

class person
{
    public:
        //parametrized constructor have argument & no retun value
    person(string name, int height, string sex)
    {
        cout << "Name:" << name << endl;
        cout << "height:" << height << endl;
        cout << "sex:" << sex << endl;
    }
};


int main()
{
    person("Yash", 7, "Male");
    return 0;
}
