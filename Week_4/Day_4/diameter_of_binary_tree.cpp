class Solution {
private:
    pair<int,int> diaFast(TreeNode* root){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int> left=diaFast(root->left);
        pair<int,int> right=diaFast(root->right);

        int op1=left.first;
        int op2=right.first;
        int op3=left.second+right.second;

        pair<int,int> ans;
        ans.first=max(op1,max(op2,op3));  //diameter
        ans.second=max(left.second,right.second)+1;    //height
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return diaFast(root).first;
    }
};
