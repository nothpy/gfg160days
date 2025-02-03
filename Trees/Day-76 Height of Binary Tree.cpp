// User function template for C++

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* node)
    {
        if(node  == NULL) return -1;
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return 1+max(leftHeight, rightHeight);
    }
};
