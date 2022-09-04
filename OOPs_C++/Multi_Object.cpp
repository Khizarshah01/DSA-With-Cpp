#include <iostream>

using namespace std;

class Student {

   public:

   string name;

   int rollno;

   Student() {}

   Student(string x, int y) {

      name = x;

      rollno = y;

   }

   void printDetails() {

      cout << rollno << " - " << name << endl;

   }

};

int main() {

   //declare array with specific size

   Student students[] = {Student("Ram", 5), Student("Lesha", 4), Student("Anita", 2)};

   

   for(int i=0; i < 3; i++) {

      students[i].printDetails();

   }

}
