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
        vector<double> averageOfLevels(TreeNode* root) {
            
            vector < double >v;
            if(root==NULL)return v;
            queue<TreeNode* > q; 
            int lev=1;
            q.push(root);
            while(!q.empty()){
                lev = q.size();
                double sum=0;
                for(int i=0; i<lev; i++){
                    TreeNode* t=q.front();
                    q.pop();
                    if(t->left!=NULL)q.push(t->left);
                    if(t->right!=NULL)q.push(t->right);
                    sum+=t->val;
                }
                v.push_back(sum/lev);
            }
            return v;
        }
        
    };