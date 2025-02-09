// User Fuction template for C++
/*
// Tree Node
class Node {
public:
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
    // Function to return maximum path sum from any node in a tree.
    int pathsum(Node* root, int& maxSum) {
        if (!root) return 0;
        int left = max(0, pathsum(root->left, maxSum));
        int right = max(0, pathsum(root->right, maxSum));
        maxSum = max(maxSum, root->data + left + right);
        return root->data + max(left, right);
    }
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node* root) {
        int maxSum = INT_MIN;
        pathsum(root, maxSum);
        return maxSum;
    }
};
