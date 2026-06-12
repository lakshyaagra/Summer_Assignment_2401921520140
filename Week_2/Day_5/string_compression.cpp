class Solution {
public:
    int compress(vector<char>& chars) {
        int j=0;
        // 10-> "1" , "0"
        int i=0,n=chars.size();
        int times=0;
        while(i<n){
            char ch=chars[i];
            times=0;
            while(i<n && chars[i]==ch){
                i++;
                times++;
            }
            // ab i "b" pr h
            if(times==1) chars[j++]=ch;
            else if(times>1){
                chars[j++]=ch;
                string count=to_string(times);
                for(char c:count){
                    chars[j++]=c;
                }
            }
            //i++ nhi krunga nhi to ek "b" skip ho jaega
        }
        return j;
    }
};
