class Solution {
public:
int dm = 0;
int height(TreeNode* root){
    if(root == NULL) return 0;
    int heightL = height(root -> left);
    int heightR = height(root -> right);
    dm = max(dm, heightL + heightR);

    return 1 + max(heightL, heightR);

}
    int diameterOfBinaryTree(TreeNode* root) {
      height(root);

      return dm;

    }
};
