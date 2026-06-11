class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0;
        int n=s.size();
        while(i<n){
            string word="";
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(!word.empty()){
                if(!ans.empty()){
                    ans+=' ';
                }
                ans+=word;
            }
            i++;
        }
        return ans;
    }
};
