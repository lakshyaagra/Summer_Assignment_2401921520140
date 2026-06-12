class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mapping;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string key=strs[i];
            sort(key.begin(),key.end());

            mapping[key].push_back(strs[i]);
        }
        for(auto i:mapping){
            ans.push_back(i.second);
        }
        return ans;
    }
};
