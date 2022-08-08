#include<iostream>
#include<stack>
using namespace std;
/*
Stacks are a type of container adaptors that follow LIFO(Last In First Out) property, where a new element is added at one end and an element(at the top) is removed from that end only. Basically, the insertion and deletion happen on the top of the stack itself.
*/

/*
push() function is used to insert or ‘push’ an element at the top of the stack. This is an inbuilt function from C++ Standard Template Library(STL). This function belongs to the <stack> header file. The element is added to the stack container and the size of the stack is increased by 1.
*/
int main()
{
      // Empty stack

        stack<int> mystack;
        mystack.push(0);
        mystack.push(1);
        mystack.push(2);

            // Printing content of stack
// empty() function is check the stack they empty or not.
        while (!mystack.empty()) 
    {
               cout << ' ' << mystack.top();
                        mystack.pop();
        // The pop() function is used to remove or ‘pop’ an element from the top of the stack(newest or the topmost element in the stack).
    }
// Output of program 2 1 0
    return 0;
}
