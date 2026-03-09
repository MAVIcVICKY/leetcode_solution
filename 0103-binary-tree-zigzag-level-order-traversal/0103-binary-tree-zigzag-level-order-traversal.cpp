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

        vector<vector<int>>res;
        if(root==nullptr)
        return res;

        queue<TreeNode*>q;
        q.push(root);
        bool lr=1;


        while(!q.empty())
        {
            vector<int>temp;
            int n=q.size();

            for(int i=0;i<n;i++)
            {
            
            TreeNode* t=q.front();
            q.pop();
                
                
                if(t->left!=nullptr)
                q.push(t->left);
                if(t->right!=nullptr)
                q.push(t->right);
            

            temp.push_back(t->val);
            }
            if(lr==1)
            {
            res.push_back(temp); 
            }
            if(lr==0)
            {
            reverse(temp.begin(),temp.end());
            res.push_back(temp);
        
            }
            lr=1-lr;
    
            }
        
return res;
        
    }
};














