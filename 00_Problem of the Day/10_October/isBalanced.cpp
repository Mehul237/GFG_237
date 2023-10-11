class Solution {
    public:
    int height(Node* root) {
        if(root == nullptr)
            return 0;
        return 1 + max(height(root -> left), height(root -> right));
    }
    
    bool isBalanced(Node *root) {
        if(root == nullptr)
            return true;
        if(abs(height(root -> left) - height(root -> right)) > 1)
            return false;
        return (isBalanced(root -> left) && isBalanced(root -> right));
    }
};
