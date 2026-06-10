class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int n=haystack.size(),m=needle.size();
        while(i<n){
            if(j<m && haystack[i]==needle[j]){
                i++,j++;
            }
            else if(j<m && haystack[i]!=needle[j]){
                i=i-j+1;
                j=0;
            }
            if(j==m) return i-j;
        }
        return -1;
    }
};
