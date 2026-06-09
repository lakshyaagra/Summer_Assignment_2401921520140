class Solution {
private:
    bool isSame(vector<int>freq1,vector<int>freq2){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        vector<int>freq1(26,0);
        for(int i=0;i<n;i++){
            freq1[s1[i]-'a']++;
        }
        int m=s2.size();
        for(int i=0;i<m;i++){
            vector<int>freq2(26,0);
            int currIdx=i;
            int s1Index=0; 
            //baar baar mujhe s1 ko check krna hai ki kya wo s2 mai hai ya nhi islie baar baar index 0 krunga
            while(s1Index<n && currIdx<m){
                freq2[s2[currIdx]-'a']++;
                s1Index++;
                currIdx++;
            }
            if(isSame(freq1,freq2)) return true;
        }
        return false;
    }
};
