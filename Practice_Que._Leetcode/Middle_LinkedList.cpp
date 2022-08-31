//CodeWith Studio
// https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250
Node* getMidlle(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return head;
    
    if(head->next->next == NULL)
        return head->next;
    
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        }
    
    return slow;
}
Node *findMiddle(Node *head) {
    return getMidlle(head);
        
}
