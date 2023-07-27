
class Solution {
    public:
    
    Node* segregate(Node *head) {
        unordered_map<int,int>mp;
        Node* temp = head;
        
        while(temp){
            mp[temp->data]++;
            temp = temp->next;
        }
        
        Node* res = new Node(-1);
        Node* ans = res;
        
        while(mp[0]!=0) {
            res->next = new Node(0);
            res = res->next;
            mp[0]--;
        }
        
          while(mp[1]!=0) {
            res->next = new Node(1);
             res = res->next;
            mp[1]--;
        }
        
          while(mp[2]!=0) {
            res->next = new Node(2);
             res = res->next;
            mp[2]--;
        }
        return ans->next;
    }
};
