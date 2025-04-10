/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 long long mx=1e10,mn=-1e10;

 bool IsBST(struct TreeNode* root, long long minn, long long maxx)
 {
     if(root==NULL)return true;
     if(minn!=mn&&root->val<=minn)return false;
     if(maxx!=mx&&root->val>=maxx)return false;
     
     bool p = IsBST(root->left,minn,root->val);
     bool q = IsBST(root->right,root->val,maxx);
     return p&&q;
 }
 
 
 bool isValidBST(struct TreeNode* root){
    //printf("%lld\n",mn);
    //return true;
    return IsBST(root,mn,mx);
     
 }
 