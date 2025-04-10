/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool isEqual(struct TreeNode* left,struct TreeNode* right)
 {
     if(left==NULL&&right==NULL)return true;
     if(left!=NULL&&right==NULL)return false;
     if(left==NULL&&right!=NULL)return false;
     if(left->val!=right->val)return false;
     return isEqual(left->left,right->right)&& isEqual(left->right,right->left);
 }
 
 bool isSymmetric(struct TreeNode* root){
     if(root==NULL)return true;
     return isEqual(root->left,root->right);
 
 }