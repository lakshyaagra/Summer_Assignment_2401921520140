class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0,maxLen=0;
        for(int i=0;i<n;i++){
            //odd length palindrome
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(maxLen<(r-l+1)){
                    maxLen=r-l+1;
                    start=l;
                }
                l--,r++;
            }
            // even length palindrome
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(maxLen<(r-l+1)){
                    maxLen=r-l+1;
                    start=l;
                }
                l--,r++;
            }
        }
        return s.substr(start,maxLen);
    }
};
