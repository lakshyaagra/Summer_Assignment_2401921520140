class Solution {
private:
    void solve(TreeNode* root1,TreeNode* root2,bool &ans){
        if(root1==NULL && root2==NULL){
            return;
        }
        if((root1==NULL && root2!=NULL) || (root1!=NULL && root2==NULL) || (root1->val!=root2->val)){
            ans=false;
            return;
        }
        solve(root1->left,root2->right,ans);
        solve(root1->right,root2->left,ans);
    }
public:
    bool isSymmetric(TreeNode* root) {
        bool ans=true;
        solve(root->left,root->right,ans);
        return ans;
    }
};
