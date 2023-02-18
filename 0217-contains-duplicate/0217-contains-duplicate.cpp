class Solution {
public:
    bool containsDuplicate(vector<int>& num) {
        return num.size() > unordered_set<int>(num.begin(), num.end()).size();
    }
};