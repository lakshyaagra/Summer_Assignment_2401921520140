class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if((p!=NULL && q==NULL) || (p==NULL && q!=NULL)) return false;
        
        bool leftAns=isSameTree(p->left,q->left);
        bool rightAns=isSameTree(p->right,q->right);
        bool condition=(p->val==q->val);

        return (leftAns && rightAns && condition);
    }
};
