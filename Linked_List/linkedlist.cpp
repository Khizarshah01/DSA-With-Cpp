#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
        }

};

void insertnode(int data,Node* &head)
{
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);
    insertnode(3,node1);
    insertnode(7,node1);
    print(node1);

    return 0;
}
