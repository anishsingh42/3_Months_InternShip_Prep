class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans = "";
        
        while(a && b){
            //case 1 a > b
            if(a > b){
                ans += "aab";
                a -= 2;
                b--;
            }
            //case 2 b > a
            else if(b > a){
                ans += "bba";
                b -= 2;
                a--;
            }
            //case 3 a==b
            else{
                ans += "ab";
                a--;
                b--;
            }
        }
        
        //only a is left
        while(a){
            ans += 'a';
            a--;
        }
        
        //only b is left
        while(b){
            ans += 'b';
            b--;
        }
        
        return ans;
    }
};