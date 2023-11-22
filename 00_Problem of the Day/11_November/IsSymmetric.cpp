class Solution {
    public:
    
    // return true/false denoting whether the tree is Symmetric or not
    bool isIdentical(Node *r1, Node *r2) {

        if(r1==NULL && r2==NULL)return true;
        if(r1==NULL || r2==NULL){
            return false;
        }
        if(r1->data!=r2->data)return false;
        
        bool a = isIdentical(r1->left,r2->right);
        bool b = isIdentical(r1->right,r2->left);
        return a&&b;
    }
    
    bool isSymmetric(struct Node* root) {

        if(root==NULL)return true; 
        return isIdentical(root->left,root->right);
    }
};
