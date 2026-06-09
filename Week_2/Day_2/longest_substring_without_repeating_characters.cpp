class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mapp;
        int i=0,j=0,ans=0;;
        while(j<s.size()){
            mapp[s[j]]++;
            while(mapp[s[j]]>1){
                mapp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
