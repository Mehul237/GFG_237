
class Solution {
    public:
    vector<int> rightView(Node *root) {
        
       vector<int>ans;
       queue<Node*>level;
       
       level.push(root);
       
       while(!level.empty()) {
           
           int size = level.size(); 
           int helper = 0;
           
           for(int i=0; i<size; i++) {
               
               auto temp = level.front();
               level.pop();
               
               if(temp->left) {
                   level.push(temp->left);
               }
               
               if(temp->right) {
                   level.push(temp->right);
               }
               helper = temp->data;
           }
           ans.push_back(helper);
       }
       return ans;
    }
};
