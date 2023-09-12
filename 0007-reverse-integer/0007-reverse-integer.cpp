class Solution {
public:
    int reverse(int x) {
        int ld;
        long long res = 0;
        while(x){
            ld  = x%10;
            if(res > INT_MAX/10 or res < INT_MIN/10) return 0;
            res = res*10 + ld;
            x = x/10;
        }
        return (int) res;
    }
};