class Codec {
private:
    void solve(TreeNode* root,string &ans){
        if(root==NULL){
            ans+="N,";
            return;
        }
        ans+=to_string(root->val)+',';
        solve(root->left,ans);
        solve(root->right,ans);
    }
    TreeNode* decode(string &data,int &index){
        if(index>=data.size()){
            return NULL;
        }
        string str="";
        while(index<data.size() && data[index]!=','){
            str+=data[index];
            index++;
        }
        index++;
        if(str=="N") return NULL;
        TreeNode* root=new TreeNode(stoi(str));
        root->left=decode(data,index);
        root->right=decode(data,index);
        return root;
    }
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans="";
        solve(root,ans);
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int index=0;
        TreeNode* ans=decode(data,index);
        return ans;
    }
};
