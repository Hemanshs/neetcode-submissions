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
bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==nullptr &&q==nullptr)
        {
            return true;
        }
        if(p==nullptr ||q==nullptr)
        {
            return false;
        }
        if(p->val!=q->val)
        {
            return false;
        }
     
        bool l=isSameTree(p->left,q->left);
        bool r =isSameTree(p->right,q->right);
        return l&&r;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root==nullptr&&subRoot==nullptr)
        {
            return true;
        }
        if(root==nullptr||subRoot==nullptr)
        {
            return false;
        }
    bool t= isSameTree(root,subRoot);
        if(!t)
        {
        bool l=isSubtree(root->left,subRoot);
        bool r=isSubtree(root->right,subRoot);
        return l||r;
        }
        
        return t;
    }
};
