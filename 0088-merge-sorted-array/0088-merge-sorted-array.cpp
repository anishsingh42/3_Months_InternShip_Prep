class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        if(m==0 and n!=0){
            a = b;
            return;
        }
        
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        
        
        while(j >= 0){
            if(i>=0 and a[i] > b[j]) a[k--] = a[i--];
            else a[k--] = b[j--];
        }
        
        return;
    }
};