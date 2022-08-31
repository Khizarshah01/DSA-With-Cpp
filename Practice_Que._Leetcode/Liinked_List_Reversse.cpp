/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    Node* prevs = NULL;
    Node* forw = NULL;
    Node* curr = head;
    
    while(curr!=NULL)
    {
        forw = curr ->next;
        curr ->next = prevs;
        prevs = curr;
        curr = forw;
    }
    return prevs;
}

