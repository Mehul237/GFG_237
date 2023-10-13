
class Solution {
public:

    int floor(Node* root, int target)  {
        if(!root)
            return -1;
        
        if(target == root->data)
            return target;
        
        if(target > root->data)  {
            int rightFloor = floor(root->right, target);
            
            if(rightFloor != -1)
                return rightFloor;
                
            return root->data;
        } 
        else 
            return floor(root->left, target);
    }
};
