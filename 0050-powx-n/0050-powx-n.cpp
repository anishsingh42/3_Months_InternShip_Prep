class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        long long nn = n;
        if(nn < 0){
            nn = nn * -1;
            x = 1/x;
        }
        
        while(nn){
            if((nn & 1) == 1){
                res = res * x;
            }
            x = x * x;
            nn = nn >> 1; //divide by 2
        }
        
        return res;
    }
};