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
        int mn=INT_MAX,p;
        int kthSmallest(TreeNode* root, int k) {
            if(root==NULL)return 0;
            p=k;
            DFS(root);
            return mn;
        }
         void DFS(TreeNode* root){
            if(root==NULL)return;
            
            if(root->left!=NULL){
                DFS(root->left);
            }
            p--;
            if(p==0){
                mn=min(mn,root->val);
            }
            
            if(root->right!=NULL){
                DFS(root->right);
            }
        }
    };