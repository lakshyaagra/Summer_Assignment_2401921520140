class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        if(ransomNote.size()>magazine.size()) return false;

        vector<int>freq2(26,0);

        for(char ch: magazine) freq2[ch-'a']++;

        for(int i=0;i<ransomNote.size();i++){
            freq2[ransomNote[i]-'a']--;
            if(freq2[ransomNote[i]-'a']<0) return false;
        }

        return true;

    }
};
