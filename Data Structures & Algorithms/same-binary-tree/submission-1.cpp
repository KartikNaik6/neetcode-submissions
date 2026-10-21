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
        stack<TreeNode*> st1,st2;
        while((p!=NULL || q!=NULL) || (st1.empty()!=true && st2.empty()!=true)){
            if((p==NULL && q!=NULL) || (p!=NULL && q==NULL)) return false;
            if(p==NULL && q==NULL) {
                p=st1.top()->right; st1.pop();
                q=st2.top()->right; st2.pop();
            }
            else{
                if(p->val!=q->val) return false;
                st1.push(p); p=p->left; 
                st2.push(q); q=q->left;
            }
        }
        return true;
    }
};
