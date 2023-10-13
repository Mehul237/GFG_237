
class Solution {
  public:
  
    string help(Node*root, unordered_map<string, int>&m) {
        if(!root) return "";
        string s = "";
        s += help(root -> left, m);
        s.push_back(root -> data + '0');
        s += help(root -> right, m);
        m[s]++;
        return s;
    }
    
    int dupSub(Node *root) {
        unordered_map<string, int> m;
        help(root, m);
        
        for(auto it = m.begin(); it != m.end(); ++it) {
            if(it -> first.size() > 1 && it -> second > 1) return 1;
        }
        return 0;
    }
};

