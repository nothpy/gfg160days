/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void getLeftBoundary(Node* root, vector<int>& res) {
        Node* cur = root->left;
        while (cur) {
            if (cur->left || cur->right) 
                res.push_back(cur->data);
            if (cur->left)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }

    void getLeafNodes(Node* root, vector<int>& res) {
        if (!root) return;
        if (!root->left && !root->right) 
        { 
            res.push_back(root->data);
            return;
        }
        getLeafNodes(root->left, res);
        getLeafNodes(root->right, res);
    }

    void getRightBoundary(Node* root, vector<int>& res) {
        vector<int> temp;
        Node* cur = root->right;
        while (cur) {
            if (cur->left || cur->right) 
                temp.push_back(cur->data);
            if (cur->right)
                cur = cur->right;
            else
                cur = cur->left;
        }
        reverse(temp.begin(), temp.end());
        res.insert(res.end(), temp.begin(), temp.end());
    }
    vector<int> boundaryTraversal(Node *root)
    {
       vector<int> res;
        if (!root) return res;

        res.push_back(root->data); 

        if (root->left || root->right) 
        {
            getLeftBoundary(root, res);
            getLeafNodes(root, res);
            getRightBoundary(root, res);
        }

        return res;
    }
};
