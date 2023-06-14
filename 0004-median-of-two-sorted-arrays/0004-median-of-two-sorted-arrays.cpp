class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if(a.size() > b.size()) return findMedianSortedArrays(b,a);
        int low = 0;
        int high = a.size();
        int pos  = (a.size()+b.size()+1)/2;
        
        int l1, l2 = INT_MIN;
        int r1, r2 = INT_MAX;
        int cut1, cut2;
        while(low<=high){
            cut1 = (low+high)/2;
            cut2 = pos-cut1;
           
            
            l1 = (cut1==0) ? INT_MIN: a[cut1-1];
            l2 = (cut2==0) ? INT_MIN : b[cut2-1];
            
            r1 = (cut1==a.size()) ? INT_MAX : a[cut1];
            r2 = (cut2==b.size()) ? INT_MAX : b[cut2];
            
            
            if(l1<=r2 and l2<=r1){
                if((a.size()+b.size())%2 == 0) return (max(l1,l2)+min(r1,r2))/2.0;
                else return (max(l1,l2));
            }
            else if(!(l1<=r2)) high = cut1-1;
            else low = cut1+1;
            
        }
        
        return 0.0;
    }
};