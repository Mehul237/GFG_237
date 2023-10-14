class Solution
{
    public:
    void func(Node *root, unordered_map<int, int> &m, vector<int> &v) {
        if(!root) return;
        func(root -> left, m, v);
        if(m[root -> data]) v.push_back(root -> data);
        m[root -> data]++;
        func(root -> right, m, v);
    }
    
    vector <int> findCommon(Node *root1, Node *root2) {
        unordered_map<int, int> m;
        vector<int> v;
        func(root1, m, v);
        func(root2, m, v);
        return v;
    }
};
