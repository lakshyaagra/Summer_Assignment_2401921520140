class Solution {
private:
 bool isValid(char ch){
    return ((ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57));
 }
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<=j){
            if(isValid(s[i]) && isValid(s[j]) && tolower(s[i])==tolower(s[j])){
                i++,j--;
            }
            else if(!isValid(s[i])){
                i++;
            }
            else if(!isValid(s[j])){
                j--;
            }
            else if(isValid(s[i]) && isValid(s[j]) && tolower(s[i])!=tolower(s[j])){
                return false;
            }
        }
        return true;
    }
};
