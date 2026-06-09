class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n=p.size(),m=s.size();
        if(n>m) return ans;
        
        vector<int>pFreq(26,0);
        vector<int>sFreq(26,0);

        for(int i=0;i<n;i++){
            pFreq[p[i]-'a']++;
        }
        // first window of s in p
        for(int i=0;i<n;i++){
            sFreq[s[i]-'a']++;
        }

        if(sFreq==pFreq) ans.push_back(0);

        // slide the window
        for(int i=n;i<m;i++){
            sFreq[s[i]-'a']++;
            sFreq[s[i-n]-'a']--;

            if(sFreq==pFreq) ans.push_back(i-n+1);
        }
        return ans;
    }
};
