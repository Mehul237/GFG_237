class Solution {

public:

int findDistance(Node* root, int target, vector<int>& result, int k) {

    if (!root) {
        return -1;
    }

    if (root->data == target) {
        atdistnode(root, result, k);
        return 0;
    }

    int leftDist = findDistance(root->left, target, result, k);
    if (leftDist != -1) {
        if (leftDist + 1 == k) {
            result.push_back(root->data);
        } else {
            atdistnode(root->right, result, k - leftDist - 2);
        }
        return 1 + leftDist;
    }

    int rightDist = findDistance(root->right, target, result, k);
    if (rightDist != -1) {
        if (rightDist + 1 == k) {
            result.push_back(root->data);
        } else {
            atdistnode(root->left, result, k - rightDist - 2);
        }
        return 1 + rightDist;
    }

    return -1;
}

    void atdistnode(Node* root, vector<int>& res, int dis) {
       if (!root || dis < 0) {
          return;
       }

       if (dis == 0) {
          res.push_back(root->data);
          return;
       }

        atdistnode(root->left, res, dis - 1);
        atdistnode(root->right, res, dis - 1);
    }

    vector<int> KDistanceNodes(Node* root, int target, int k) {
        vector<int> result;
        findDistance(root, target, result, k);
        sort(result.begin(), result.end());
        return result;
    }
};
