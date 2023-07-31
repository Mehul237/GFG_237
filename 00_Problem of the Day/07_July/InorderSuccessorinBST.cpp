
class Solution {
  public:
  
    void inorder(Node *root,Node* &res,int k) {
        if(root == NULL) 
           return;        
        inorder(root -> left, res, k);
        
        if(root -> data > k && res -> data > root -> data)
          res = root;
        inorder(root -> right, res, k);
    }
    
    Node * inOrderSuccessor(Node *root, Node *x) {
        Node *res = x;
        int k = x -> data;
        
        res -> data = INT_MAX;
        inorder(root, res, k);
        
        if(res -> data == INT_MAX) 
           res -> data = -1;
        return res;
    }
};
