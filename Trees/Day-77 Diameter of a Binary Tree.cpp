/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int maxDiameter =0;
    int height(Node* root) 
    {
        if (root == NULL) return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }

    int diameter(Node* root) {
        height(root); 
        return maxDiameter;
    }
};
