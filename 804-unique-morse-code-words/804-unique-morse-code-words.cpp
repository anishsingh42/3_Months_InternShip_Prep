class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morseCodes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        unordered_set<string> res;
        string temp = "";
        for(string word : words){
            temp = "";
            for(char ch : word){
                temp += morseCodes[ch - 'a'];
            }
            res.insert(temp);
        }
        
        return res.size();
        
        
    }
};