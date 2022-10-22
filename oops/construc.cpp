#include <iostream>
using namespace std;

class a
{
    private:
        int length, breath;
    public:
        //non parametrized/Default constructor is use save Default value in data member
        a()
        {
            length=10;
            breath=5;
        }
        void get()
        {
            cout << length*breath;
        }
};
int main()
{
    a obj;
    obj.get();
    return 0;
}
