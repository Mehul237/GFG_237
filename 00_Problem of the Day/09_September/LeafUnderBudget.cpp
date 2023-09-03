
class Solution {
public:
    void find(Node *root, vector<int> &ans, int cnt) {
    
    if(root==NULL){
        return;
    }
    
    if(root->left==NULL && root->right==NULL) {
            ans.push_back(cnt);
            return;
            
        } 
        
        find(root->left, ans,cnt+1);
        find(root->right, ans,cnt+1);
    }

    int getCount(Node *root, int k) {
        
        vector<int> ans;
        find(root,ans,1);
        sort(ans.begin(), ans.end());
        
        int cnt = 0;
        
        for(int i=0; i<ans.size(); i++) {
            if(k >= ans[i]) {
                cnt++;
                k = k - ans[i];
            }
            else {
                return i;
            }
        }
        return cnt;
    }
};
