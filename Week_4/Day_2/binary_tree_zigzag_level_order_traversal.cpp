class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        bool leftToRight=true;
        queue<TreeNode* >q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int>level(size);
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                int index=leftToRight?i:size-i-1;
                level[index]=temp->val;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            leftToRight=!leftToRight;

            ans.push_back(level);
        }
        return ans;
    }
};
