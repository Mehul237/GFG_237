
class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL || head->next==NULL) return head;
        
        Node* f = head;
        Node* s = head -> next;
        Node* new_head = pairWiseSwap(head -> next -> next);
        
        s -> next = f;
        f -> next = new_head;
        
        return s;
    }
};
