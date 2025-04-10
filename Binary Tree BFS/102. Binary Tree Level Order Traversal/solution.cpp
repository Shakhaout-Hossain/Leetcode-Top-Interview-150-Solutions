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
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector < vector<int> > v;
            if(root==NULL)return v;
            queue < TreeNode* >q;
            q.push(root);
            while(1){
                int sz=q.size();
                if(sz==0)return v;
                vector < int >p;
                while(sz>0){
                    TreeNode *temp=q.front();
                    q.pop();
                    p.push_back(temp->val);
                    if(temp->left!=NULL){
                        q.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        q.push(temp->right);
                    }
                    sz--;
                }
                v.push_back(p);
            }
            
            return v;
        }
    };