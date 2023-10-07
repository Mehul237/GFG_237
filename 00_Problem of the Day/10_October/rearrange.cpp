
class Solution {
    public:
    
    Node *reverse(struct Node *head) {
       if(head == NULL || head -> next == NULL) {
            return head;
        }
        Node *curr = head;
        Node *prev = NULL;
        
        while(curr) {
            Node *nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev; 
    }
    
    void rearrange(struct Node *odd) {
        Node *newNode = odd -> next;
        Node *nptr = newNode;
        Node* curr = odd;
        Node *temp = newNode;
        
        while(curr -> next && nptr -> next) {
           curr -> next = curr -> next -> next;
           curr = curr -> next;
            nptr -> next = nptr -> next -> next;
            nptr = nptr -> next;
        }
        Node *newstart = reverse(newNode);
        curr -> next = newstart;
    }
};
