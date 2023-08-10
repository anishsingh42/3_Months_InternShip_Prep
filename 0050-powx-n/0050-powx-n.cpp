class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        long long nn = n;
        
        if(nn < 0){
            nn = nn*-1;
            x = 1/x;
        }
        while (nn > 0) {
            if ((nn & 1) == 1)
                result = result * x;
            x = x * x;
            nn = nn >> 1; // divide by 2
        }   
        
        return result;
    }
};
