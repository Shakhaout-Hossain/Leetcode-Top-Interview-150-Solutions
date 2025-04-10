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
        int sum=0;
        int sumNumbers(TreeNode* root) {
            Sum(root,0);
            return sum;
        }
        int Sum(TreeNode* root, int s){
            if(root==nullptr)return 0;
            s*=10;
            s+=root->val;
            if(root->left==nullptr&&root->right==nullptr){
                sum+=s;
                s=0;
            }
            Sum(root->left,s);
            Sum(root->right,s);
            return s;
        }
    };