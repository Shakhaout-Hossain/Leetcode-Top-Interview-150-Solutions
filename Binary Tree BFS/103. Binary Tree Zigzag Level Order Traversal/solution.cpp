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
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>>v;
            if(root==NULL)return v;
            queue<TreeNode* > q; 
            q.push(root);
            int flg=0;
            while(!q.empty()){
                int sz = q.size();
                double sum=0;
                vector < int >p;
                for(int i=0; i<sz; i++){
                    TreeNode* t=q.front();
                    q.pop();
                    if(t->left!=NULL)q.push(t->left);
                    if(t->right!=NULL)q.push(t->right);
                    p.push_back(t->val);
                }
                if(flg==1){
                    reverse(p.begin(),p.end());
                    flg=0;
                }
                else flg=1;
                v.push_back(p);
            }
            return v;
        }
    };