class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        // Merge the two arrays and find the median using the formula
        
        vector<int> c;
        int i=0;
        int j=0;
        
        while(i<a.size() && j<b.size()){
            if(a[i] <= b[j])
                c.push_back(a[i++]);
            else
                c.push_back(b[j++]);
        }
        
        // Check whether elements are still remaining in a
        while(i<a.size()){
            c.push_back(a[i++]);
        }
        
        // Check whether elements are still remaining in b
        while(j<b.size()){
            c.push_back(b[j++]);
        }
        
        // Calculate median
        double median;
        int n = c.size();
        if(n % 2 != 0)
            median = c[n/2];
        else
            median = (c[n/2 - 1] + c[n/2]) / 2.0;
            
        return median;
    }
};
