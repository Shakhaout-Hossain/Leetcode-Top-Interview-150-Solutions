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
        TreeNode* invertTree(TreeNode* root) {
            DFS(root);
            return root;
        }
        void DFS(TreeNode* root){
            if(root==NULL)return;
            int k;
           // if(root->left!=NULL&&root->right!=NULL){
                swap(root->left,root->right);
            //}
            DFS(root->left);
            DFS(root->right);
        }
    };