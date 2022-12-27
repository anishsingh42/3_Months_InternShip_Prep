class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
           sort(a.begin(), a.end());
           vector<vector<int>> ans;
           

           for(int i=0;i<a.size();i++){
               if(i==0 || (i>0 && a[i] != a[i-1])){
                   int lo = i+1, hi = a.size()-1, sum = 0-a[i];
                   while(lo<hi){
                       if(a[lo]+a[hi] == sum){
                           vector<int> t;
                           t.push_back(a[i]);
                           t.push_back(a[lo]);
                           t.push_back(a[hi]);
                           ans.push_back(t);
                       while(lo<hi && a[lo] == a[lo+1])lo++;
                       while(lo<hi && a[hi] == a[hi-1])hi--;

                       lo++;hi--;
                    }
                     else if(a[lo] + a[hi] < sum) lo++;
                     else hi--;  
                   }
               }
           }

           return ans;
    }
};