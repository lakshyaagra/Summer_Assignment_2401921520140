class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>nge2;
        int n=nums2.size();
        stack<int>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--){
            int curr=nums2[i];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(!st.empty()){
                nge2[curr]=st.top();  //st.top is representing nge of curr in nums2
            }
            else nge2[curr]=-1;

            st.push(curr);
        }
        vector<int>ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            ans[i]=nge2[nums1[i]];
        }
        return ans;
    }
};
