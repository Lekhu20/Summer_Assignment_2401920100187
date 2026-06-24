class Solution {
public:
int preIndex = 0;
    unordered_map<int,int> mp;

    TreeNode* solve(vector<int>& preorder,
                    vector<int>& inorder,
                    int inStart,
                    int inEnd)
    {
        if(inStart > inEnd)
            return NULL;

        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int pos = mp[rootVal];

        root->left = solve(preorder, inorder,
                           inStart, pos - 1);
        root->right = solve(preorder, inorder,
                            pos + 1, inEnd);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        return solve(preorder, inorder,
                     0, inorder.size()-1);
    }
};
