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
        vector < int > v;
        vector<int> rightSideView(TreeNode* root) {
            if(root==NULL)return v;
            BFS(root);
            return v;
        }
        void BFS(TreeNode* root){
            if(root==NULL)return;
            queue<TreeNode* > q; 
            q.push(root);
            while(!q.empty()){
                int sz = q.size();
                double sum=0;
                for(int i=0; i<sz; i++){
                    TreeNode* t=q.front();
                    q.pop();
                    if(t->left!=NULL)q.push(t->left);
                    if(t->right!=NULL)q.push(t->right);
                    if(i==sz-1)v.push_back(t->val);
                }
                
            }
            
        }
    };