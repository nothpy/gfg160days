/*Complete the function below

struct Node {
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
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node *root, int k)
    {
        stack<Node*> st;
        Node* curr = root;
        int count = 0;
        while (!st.empty() || curr != NULL) {
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            count++;
            if (count == k) {
                return curr->data;
            }
            curr = curr->right;
        }
        
        return -1;
    }
};
