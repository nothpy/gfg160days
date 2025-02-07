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
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) 
    {
        vector<int> ans;
        Node* curr = root;
        while (curr != NULL) {
            if (curr->left == NULL) 
            {
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else
            {
                Node* pre = curr->left;
                while (pre->right != NULL && pre->right != curr) {
                    pre = pre->right;
                }
               if (pre->right == NULL) {
                    pre->right = curr;
                    curr = curr->left;
                } 
               else {
                    pre->right = NULL;
                    ans.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
        return ans;
    }
};
