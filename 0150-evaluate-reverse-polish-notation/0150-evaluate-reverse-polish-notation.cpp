class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        for(int i=0;i<t.size();i++){
            if(t[i]=="+" || t[i]=="-" || t[i]=="*" || t[i]=="/"){
                int op1 = s.top();
                s.pop();
                int op2 = s.top();
                s.pop();
                switch(t[i][0]){
                    case '+': s.push(op1+op2); break;
                    case '-': s.push(op2-op1); break;
                    case '*': s.push(op1*op2); break;
                    case '/': s.push(op2/op1); break;
                }
            }
            else{
                s.push(stoi(t[i]));
            }
        }
        return s.top();
    }
};