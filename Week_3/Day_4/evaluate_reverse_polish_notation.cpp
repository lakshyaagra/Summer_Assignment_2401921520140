class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        int n=tokens.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                s.push(stoi(tokens[i]));       
            }
            else{   
                int toBeTop;
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                
                if(tokens[i]=="+") toBeTop=b+a;
                else if(tokens[i]=="-") toBeTop=b-a;
                else if(tokens[i]=="*") toBeTop=b*a;
                else toBeTop=b/a;
                s.push(toBeTop);
            }
        }
        return s.top();
    }
};
