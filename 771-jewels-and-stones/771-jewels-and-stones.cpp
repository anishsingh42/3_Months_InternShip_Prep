class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num = 0;
        for(auto i: jewels){
            num += count(stones.begin(), stones.end(), i);
        }
        
        return num;
    }
};