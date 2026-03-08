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
       
        vector<vector<int>>res;

        if(root==nullptr)
        return res;
    

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            vector<int>temp;
            int n=q.size();

            //Pure level pe iterate kr rhe ,aur q me unke bcho ko push kr  rhe khudko pop krke
            for(int i=0;i<n;i++)
            {
                TreeNode* t=q.front();
                q.pop();

                //dono bche dekho agr hai toa push
                if(t->left!=nullptr)
                q.push(t->left);
                if(t->right!=nullptr)
                q.push(t->right);

                //temp vector joa res me push krege 
                temp.push_back(t->val);
            }

            //final vec of vec jha res hai
            res.push_back(temp);
        }
        return res;
    }
};