class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int l = 0;
        int h = a.size()-1;
        while(l<h){
            int m = l + (h-l)/2;
            if(m%2==1) m--;
            if(a[m]!=a[m+1]) h=m;
            else l=m+2;
        }
        return a[l];
    }
};