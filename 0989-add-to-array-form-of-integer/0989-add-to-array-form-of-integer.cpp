class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        reverse(num.begin(), num.end());
        int i=0;
        int digit;
        while(k){
            //find the last digit 
            digit = k % 10;
            //add this last digit to num[i] if (i < num.length())
            if(i < num.size()) num[i] += digit;
            else num.push_back(digit);
            
            //edge cases
            //carry 
            carry = num[i] / 10;
            //if num[i] > 10 then we want only the unit digit 
            num[i] = num[i] % 10;
            
            k = k/10;
            k = k + carry;
            
            i++;
        }
        
        reverse(num.begin(), num.end());
        return num;
    }
};