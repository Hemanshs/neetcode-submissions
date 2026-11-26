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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if (root==nullptr)
       {
        return root;
       } 
         
       
      TreeNode* l=lowestCommonAncestor(root->left,p,q);
     TreeNode* r=lowestCommonAncestor(root->right,p,q);
     if((root!=nullptr&&(root->val==p->val||root->val==q->val))||(l!=nullptr )&&(r!=nullptr))
       {
        return root;
       }
       
       if(l!=nullptr )
       {
        return l;
       }
       if(r!=nullptr)
       {
        return r;
       }
       
       return nullptr;
       
    }
};
