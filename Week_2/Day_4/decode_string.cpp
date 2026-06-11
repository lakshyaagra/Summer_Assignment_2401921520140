class Solution {
public:
    string decodeString(string s) {
        string ans="";
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else{
                string pattern="";
                while(!st.empty() && st.top()!='['){
                    pattern+=st.top();
                    st.pop();
                }
                reverse(pattern.begin(),pattern.end());
                if(st.top()=='[') st.pop();
                string num="";
                while(!st.empty() && isdigit(st.top())){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int times=stoi(num);
                string temp="";
                for(int j=0;j<times;j++){
                    temp+=pattern;
                }
                for(char c:temp) st.push(c);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
