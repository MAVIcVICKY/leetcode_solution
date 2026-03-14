/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

int lca(TreeNode*&root,TreeNode*&p,TreeNode* &q,TreeNode* &ans)
{
    if(root==nullptr)
        return 0;

        int left=lca(root->left,p,q,ans);
        int right=lca(root->right,p,q,ans);
        int self=0;
        if(root==p || root==q)
        self=1;

        int total=left+right+self;

        if(total==2 && ans==nullptr)
        ans=root;

        return total;

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=nullptr;

        lca(root,p,q,ans);
        return ans;
    
        
    }
};