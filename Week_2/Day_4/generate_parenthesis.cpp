class Solution {
private:
    void solve(string &output,vector<string>& ans,int n,int open,int close){
        // base case
        if(open==n && close==n){
            ans.push_back(output);
            return;
        }
        if(open<n){
            output.push_back('(');
            solve(output,ans,n,open+1,close);
            output.pop_back();
        }
        if(close<open){
            output.push_back(')');
            solve(output,ans,n,open,close+1);
            output.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string output="";
        int open=0,close=0;
        solve(output,ans,n,open,close);
        return ans;
    }
};
