class Solution {
    
    public:
    bool ans = true;
    
    void inorder(Node *r1, Node *r2) {
        if(!r1) {
            if(r2)
                ans = false;
            return;
        }
        if(!r2) {
            if(r1)
                ans = false;
            return;
        }
        
        inorder(r1->left, r2->left);
        
        if(r1->data != r2->data)
            ans = false;
        inorder(r1->right, r2->right);
    }
    
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2) {

        inorder(r1, r2);
        return ans;
    }
};
