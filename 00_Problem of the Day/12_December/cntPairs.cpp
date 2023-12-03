class Solution {
public:

void inorder(Node *root, vector<int> &bst) { 
        if(root==NULL)
        return;
        
        inorder(root->left, bst);
        bst.push_back(root->data);
        inorder(root->right, bst);
    }
    
    int countPairs(Node* root1, Node* root2, int x) {
        
        vector<int> bst1, bst2;
        int sum=0;
        
        inorder(root1, bst1);
        inorder(root2, bst2);
        int c=0;
        int l=0, r=bst2.size()-1;
        
        while(l<bst1.size() && r>=0) {
            sum=bst1[l]+bst2[r];
            
            if(sum==x){
                c++;
                l++;
                r--;
            }
            else if(sum<x)
            l++;
            else
            r--;
        }
        
        return c;
    }

};
