
class Solution {
    public:
    struct node *reverse (struct node *head, int k) { 
        
        node *prevTop = new node(0);
        node *prev = NULL, *next = NULL;
        node *curr = head;
        head = prevTop;
        
        while(curr) {
            
            node *temp = curr;
            
            for(int i=0; (i<k && curr); i++) {
                
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            prevTop->next = prev;
            prevTop = temp;
            prevTop->next = NULL;
        }
        return head->next;
    }
};
