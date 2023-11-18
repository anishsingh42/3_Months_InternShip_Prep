class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        uint32_t bits = 0;
        for(int i=0; i<32; i++){
            bits = (n >> i) & 1;
            // cout << bits << " ";
            res = res | (bits << (31-i));
        }
        return res;
    }
};