class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int l=1;l<=n/2;l++){
            //l is the length of substring(n/2 se jyada lunga to n length ki string nhi bn paegi)
            if(n%l!=0){  //maanlo 12%5 hai to mai n puri substring(len 5) lek n length string nhi bna paunga
                continue;
            }
            string pattern=s.substr(0,l); 
            int times=n/l;  //itni baar "baar baar" lgaunga so that it remains n length or less
            string newStr="";  //iss string mai lgaunga baar baar and will check
            for(int j=0;j<times;j++){
                newStr+=pattern;
            }
            if(newStr==s) return true;
        }
        return false;
    }
};
