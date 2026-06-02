class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Approach :- HashMap
        unordered_map<int,int>freq;
        // count frequencies
        for(int num: nums) freq[num]++;

        // check if frequency is greater than 1 for any element 
        for(int num: nums){
            if(freq[num]>1) return true;
        }
        return false;
    }
};
