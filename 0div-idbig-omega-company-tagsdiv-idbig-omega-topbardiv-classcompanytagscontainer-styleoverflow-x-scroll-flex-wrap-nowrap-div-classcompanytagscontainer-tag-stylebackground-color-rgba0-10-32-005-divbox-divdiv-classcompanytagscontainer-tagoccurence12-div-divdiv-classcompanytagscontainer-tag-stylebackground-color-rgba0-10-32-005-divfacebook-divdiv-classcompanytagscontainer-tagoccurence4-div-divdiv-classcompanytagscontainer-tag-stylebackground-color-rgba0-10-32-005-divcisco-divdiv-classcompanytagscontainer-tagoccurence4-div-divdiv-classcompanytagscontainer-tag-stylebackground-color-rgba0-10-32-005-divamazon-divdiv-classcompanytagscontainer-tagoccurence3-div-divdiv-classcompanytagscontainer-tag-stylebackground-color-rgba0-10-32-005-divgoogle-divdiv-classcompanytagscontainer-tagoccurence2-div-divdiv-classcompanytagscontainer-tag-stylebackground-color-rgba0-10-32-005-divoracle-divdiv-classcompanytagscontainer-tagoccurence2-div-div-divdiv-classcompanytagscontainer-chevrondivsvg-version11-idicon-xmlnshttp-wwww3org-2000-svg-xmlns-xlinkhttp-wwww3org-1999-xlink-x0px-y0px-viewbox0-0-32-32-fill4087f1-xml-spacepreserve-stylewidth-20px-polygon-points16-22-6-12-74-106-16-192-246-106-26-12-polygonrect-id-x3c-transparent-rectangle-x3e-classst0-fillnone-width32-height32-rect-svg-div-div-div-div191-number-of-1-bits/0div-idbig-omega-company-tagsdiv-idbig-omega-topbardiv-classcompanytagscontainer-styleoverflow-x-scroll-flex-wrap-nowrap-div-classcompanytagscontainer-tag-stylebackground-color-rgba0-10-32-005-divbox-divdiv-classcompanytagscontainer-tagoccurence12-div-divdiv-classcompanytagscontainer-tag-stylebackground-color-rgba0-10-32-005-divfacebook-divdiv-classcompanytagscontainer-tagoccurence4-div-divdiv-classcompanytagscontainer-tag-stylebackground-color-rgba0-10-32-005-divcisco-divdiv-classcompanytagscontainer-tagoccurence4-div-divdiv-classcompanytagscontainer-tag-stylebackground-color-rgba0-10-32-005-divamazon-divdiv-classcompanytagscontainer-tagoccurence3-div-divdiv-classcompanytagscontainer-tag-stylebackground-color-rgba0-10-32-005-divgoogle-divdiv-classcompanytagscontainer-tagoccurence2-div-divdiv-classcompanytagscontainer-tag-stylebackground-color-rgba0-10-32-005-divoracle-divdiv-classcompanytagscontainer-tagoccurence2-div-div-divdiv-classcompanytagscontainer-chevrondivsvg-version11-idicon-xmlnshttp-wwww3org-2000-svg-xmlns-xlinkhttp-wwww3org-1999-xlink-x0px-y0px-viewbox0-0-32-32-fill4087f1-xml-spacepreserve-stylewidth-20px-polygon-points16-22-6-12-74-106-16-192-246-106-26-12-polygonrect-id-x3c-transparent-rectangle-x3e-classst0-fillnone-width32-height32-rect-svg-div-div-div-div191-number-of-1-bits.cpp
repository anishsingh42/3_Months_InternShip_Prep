class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        uint32_t bit;
        for(int i=0; i<32; i++){
            bit = (n >> i) & 1;
            if(bit == 1) cnt++;
        }
        return cnt;
    }
};