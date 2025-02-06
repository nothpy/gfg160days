 Node* buildTreeHelper(vector<int> &preorder, vector<int> &inorder, int inorderStart, int inorderEnd) {
        if (inorderStart > inorderEnd) return NULL;
        
        // Pick current node from preorder traversal
        int rootValue = preorder[preorderIndex++];
        Node* root = new Node(rootValue);
        
        // Find index of the root in inorder traversal
        int inorderIndex = inorderMap[rootValue];
        
        // Recursively construct the left and right subtrees
        root->left = buildTreeHelper(preorder, inorder, inorderStart, inorderIndex - 1);
        root->right = buildTreeHelper(preorder, inorder, inorderIndex + 1, inorderEnd);
        
        return root;
    }
    
    Node* buildTree(vector<int> &inorder, vector<int> &preorder) {
        inorderMap.clear();
        preorderIndex = 0;
        
        // Build a hashmap to store value -> index mappings for inorder traversal
        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }
        
        return buildTreeHelper(preorder, inorder, 0, inorder.size() - 1);
    }
};
