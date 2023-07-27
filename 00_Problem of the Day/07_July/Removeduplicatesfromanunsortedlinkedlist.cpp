
class Solution {
    public:
    Node * removeDuplicates( Node *head) {
        
      if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        
        Node* prev = head;
        Node* curr = head->next;
        
        unordered_map<int , int> mp;
        
        mp[head->data]++;
        
        while(curr)
        {
            mp[curr->data]++;
            if(mp[curr->data] > 1)
            {
                //we need to delete this duplicate
                prev->next = curr->next;
                curr = prev->next;
            } 
            else if(mp[curr->data] == 1)
            {
                curr = curr->next;
                prev = prev->next;
            }
            
        }
        return head;
    }
};
