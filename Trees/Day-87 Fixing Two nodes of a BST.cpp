/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void correctBST(Node* root) 
    {
       Node* first = nullptr;
        Node* second = nullptr;
        Node* prev = nullptr;
        inorderTraversal(root, first, second, prev);
        if (first && second) {
            swap(first->data, second->data);
        }
    }
    private:
    void inorderTraversal(Node* root, Node*& first, Node*& second, Node*& prev) {
        if (root == nullptr) return;
        inorderTraversal(root->left, first, second, prev);
        if (prev && root->data < prev->data) {
            if (!first) {
                first = prev;
            }
            second = root;
        }
        prev = root;
        inorderTraversal(root->right, first, second, prev);
    }
};
