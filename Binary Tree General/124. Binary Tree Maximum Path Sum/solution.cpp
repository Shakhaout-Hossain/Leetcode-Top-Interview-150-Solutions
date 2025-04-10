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
        int mx=-10000;
        int maxPathSum(TreeNode* root) {
            if(root==NULL)return 0;
            DFS(root);
            return mx;
        }
        int DFS(TreeNode* root){
            if(root==NULL)return 0;
            int l=max(DFS(root->left),0);
            int r=max(DFS(root->right),0);
            
            if(root->val+l+r>mx)mx=root->val+l+r;
           
            
            return root->val+max(l,r);
        }
    };