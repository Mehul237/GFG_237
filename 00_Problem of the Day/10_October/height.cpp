
class Solution {
    public:
    int height(struct Node* node){
        return (!node) ? 0 : max(height(node->left), height(node->right)) + 1;
    }
};
