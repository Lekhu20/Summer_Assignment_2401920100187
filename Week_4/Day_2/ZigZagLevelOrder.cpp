class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ans;
       if(root == NULL) return ans ;

       queue<TreeNode*> q;
       q.push(root);
       bool leftToRight = true;
       while(!q.empty()){
        int n = q.size();
        vector<int> l;
        for(int i = 0; i < n; i++){
            TreeNode* curr = q.front();
            q.pop();
            l.push_back(curr -> val);
            if(curr -> left)
            q.push(curr -> left);

            if(curr -> right)
            q.push(curr -> right);
        }
        if(!leftToRight)
            reverse(l.begin(),l.end());

            ans.push_back(l);
        leftToRight = !leftToRight;
       }
       return ans;
    }
};
