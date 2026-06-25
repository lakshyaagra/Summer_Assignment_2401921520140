class Solution {
private:
    void solve(TreeNode* root, int targetSum,int sum,bool &ans){
        if(root==NULL) return;

        sum+=root->val;
        if(root->left==NULL && root->right==NULL && sum==targetSum){
            ans=true;
            return;
        }
        solve(root->left,targetSum,sum,ans);
        solve(root->right,targetSum,sum,ans);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=false;
        int sum=0;
        solve(root,targetSum,sum,ans);
        return ans;
    }
};
