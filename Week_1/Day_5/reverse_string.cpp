class Solution {
private:
    void reverse(vector<char>& s){
        int st=0,e=s.size()-1;
        while(st<e){
            swap(s[st++],s[e--]);
        }
    }
public:
    void reverseString(vector<char>& s) {
        reverse(s);
    }
};
