class Solution {
private:
    TreeNode* solve(int &index,int n,int inorderStart,int inorderEnd,
                    unordered_map<int,int>& inMap,vector<int>& preorder){
            if(index>=n || inorderStart>inorderEnd){
                return NULL;
            }
            int element=preorder[index++];
            TreeNode* root=new TreeNode(element);
            int posn=inMap[element];
            root->left=solve(index,n,inorderStart,posn-1,inMap,preorder);
            root->right=solve(index,n,posn+1,inorderEnd,inMap,preorder);
            return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int index=0;
        unordered_map<int,int>inMap;
        for(int i=0;i<n;i++){
            inMap[inorder[i]]=i;
        }
        TreeNode* ans=solve(index,n,0,n-1,inMap,preorder);
        return ans;
    }
};
