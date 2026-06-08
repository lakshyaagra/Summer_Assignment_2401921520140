bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>sFreq;
        for(int i=0;i<s.size();i++){
            sFreq[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(sFreq[t[i]]==0){
                return false;
            }
        }
        return true;
    }
