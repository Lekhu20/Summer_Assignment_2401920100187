class Solution {
public:
bool isSym(TreeNode* left, TreeNode* right){
    if(left == NULL && right == NULL) return true;
    if(left == NULL || right == NULL) return false;
    if(left -> val != right -> val) return false;

    return isSym(left -> left, right -> right) &&
           isSym(left -> right, right -> left);
}
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;

        return isSym(root -> left , root -> right);
    }
};
