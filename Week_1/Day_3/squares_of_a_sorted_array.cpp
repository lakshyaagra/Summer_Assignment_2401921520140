class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(nums.size());
        // larger value ya to leftmost end pr hogi ya fr rightmost end pr
        // dono ke squares ko compare kro aur last m lgate jao jo bhi bda ho
        int i=0,j=n-1,k=n-1;
        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                ans[k]=nums[i]*nums[i];
                i++;
            }
            else{
                ans[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return ans;
    }
};
