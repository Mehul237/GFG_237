
int ans = -1;

int fun(Node *root, int k ,int node) {
    
    if(root==NULL)
      return -1;   
    if(root->data==node)
      return 0;
    int l = fun(root->left, k, node);
    int r = fun(root->right, k, node);
    
    if(l == -1 && r == -1)
      return -1;
    else if(l != -1) {
        if(l+1 == k) {
            ans = root->data;
            return k;
        }
        else
          return l+1;
    }
    else if(r != -1) {
        if(r+1 == k) {
            ans = root->data;
            return k;
        }
        else
          return r+1;
    }
}



int kthAncestor(Node *root, int k, int node) {
    fun(root, k, node);
    int temp = ans;
    ans = -1;
    return temp;
}
