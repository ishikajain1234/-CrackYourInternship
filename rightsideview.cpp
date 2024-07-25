/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void call(TreeNode* root,vector<int>&v){
    if(root==NULL)return;
    queue<TreeNode*>q;
    q.push(root);

    while(q.size()>0){
        int x=q.size();
        TreeNode* r=NULL;
        while(x--){
              r=q.front();
          if(r->left)q.push(r->left);
           if(r->right)q.push(r->right);
        
           
          
           q.pop();
        }
        v.push_back(r->val);
        
    }
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        call(root,ans);
        return ans;
    }
};