/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    bool findTarget(Node *root, int target)
    {
        unordered_set<int> seen;
        return inorderTraversal(root, target, seen);
    }
    private:
    bool inorderTraversal(Node* root, int target, unordered_set<int>& seen) {
        if (!root) return false;
        if (inorderTraversal(root->left, target, seen)) {
            return true;
        }
        if (seen.count(target - root->data)) {
            return true;
        }
        seen.insert(root->data);
        return inorderTraversal(root->right, target, seen);
    }
};
