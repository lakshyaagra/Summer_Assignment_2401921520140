class Solution {
private:
    pair<int,int> solve(TreeNode* root){
        if(root==NULL){
            return {INT_MIN,0};
        }
        pair<int,int>left=solve(root->left);
        pair<int,int>right=solve(root->right);

        int op1=left.first;
        int op2=right.first;
        //creation for op3
        int fromLeft=left.second;
        if(fromLeft<0) fromLeft=0; //if negative than it will decrease the path sum so add 0 instead
        int fromRight=right.second;
        if(fromRight<0) fromRight=0;
        int op3=root->val+fromLeft+fromRight;
      
        pair<int,int>ans;
        ans.first=max(op1,max(op2,op3));  //maximum path sum for the subtree/tree
        ans.second=root->val+max(fromLeft,fromRight);  //best part starting from me
        return ans;
    }
public:
    int maxPathSum(TreeNode* root) {
        return solve(root).first;
    }
};
