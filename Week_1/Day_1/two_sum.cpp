vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>numToIndex;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            numToIndex.push_back({nums[i],i});
        }
        sort(numToIndex.begin(),numToIndex.end());
        int i=0,j=numToIndex.size()-1;
        while(i<j){
            int sum=numToIndex[i].first+numToIndex[j].first;
            if(sum==target){
                ans.push_back(numToIndex[i].second);
                ans.push_back(numToIndex[j].second);
                break;
            }
            else if(sum>target) j--;
            else i++;
        }
        return ans;
    }
