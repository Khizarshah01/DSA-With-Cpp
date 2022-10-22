#include <iostream>
#include <string>
using namespace std;

class hero
{
    string name;
    int power;

    public:
    void get(){
        cout << "Enter hero name :";
        cin >> name;

        cout << "Enter power in integer :";
        cin >> power;

    }

    void out ()
    {
        cout << "Hero name is "<<name<<" & power is "<<power << endl;

    }
};

int main()
{
    // array declaration using class datatype
    hero obj[2];

    //acces get function using " -> " arrow operator
    for (int i=0; i<2; i++) {
        obj[i]->get();
    }

    for (int i=0; i<2; i++) {
        obj[i]->out();
    }
    return 0;
}
