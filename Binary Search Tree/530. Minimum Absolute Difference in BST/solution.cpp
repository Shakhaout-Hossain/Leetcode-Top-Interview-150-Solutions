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
        int mn=INT_MAX,prev=-1;
        int getMinimumDifference(TreeNode* root) {
            DFS(root);
            //cout << mn << " " << mnn<<endl;
            return mn;
    
        }
        void DFS(TreeNode* root){
            if(root==NULL)return;
            
            if(root->left!=NULL){
                DFS(root->left);
            }
            if(prev==-1){
                prev=root->val;
            }
            else{
                mn=min(mn,root->val-prev);
                prev=root->val;
            }
            
            if(root->right!=NULL){
                DFS(root->right);
            }
        }
        
    };