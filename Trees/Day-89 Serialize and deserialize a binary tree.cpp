/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root)
    {
         vector<int> result;
        if (!root) return result;
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            Node* node = q.front();
            q.pop();
            if (node) {
                result.push_back(node->data);
                q.push(node->left);
                q.push(node->right);
            } else {
                result.push_back(-1); 
            }
        }
        return result;
    }

    // Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &arr)
    {
        if (arr.empty()) return NULL;
        
        Node* root = new Node(arr[0]);
        queue<Node*> q;
        q.push(root);
        
        int i = 1;
        while (!q.empty()) {
            Node* node = q.front();
            q.pop();
            
            if (i < arr.size() && arr[i] != -1) {
                node->left = new Node(arr[i]);
                q.push(node->left);
            }
            i++;
            
            if (i < arr.size() && arr[i] != -1) {
                node->right = new Node(arr[i]);
                q.push(node->right);
            }
            i++;
        }
        return root;
    }
};
