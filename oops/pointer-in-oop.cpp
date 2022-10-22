#include <string>
#include <iostream>
using namespace std;

class school
{
    public:

    int roll;
    string name;

    void getdata()
    {
        cout <<"Enter name:";
        cin >> name;

        cout <<"Enter roll number:";
        cin >> roll;
    }

    void outdata()
    {
        cout <<"Name is"<< name << endl;
        cout <<"roll number is"<< roll << endl;
    }
};

int main()
{
    school obj1;
    //pointer declaration
    school *ptr = &obj1;
    obj1.getdata();
    //pointer chnger name value in original vairable
    ptr->name="khizar";
    obj1.outdata();

    return 0;
}
