class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        
        for(int i=0; i<intervals.size(); i++){
            //case 1 : new interval is after the range of the current interval, thus no overlapping and therefore the current interval can be added to the res
            if(intervals[i][1] < newInterval[0]){
                res.push_back(intervals[i]);
            }
            //case 2 : new interval is lies before the the range of the current interval, thus no overlapping and therefore new interval can be added to the res
            else if(intervals[i][0] > newInterval[1]){
                res.push_back(newInterval);
                newInterval = intervals[i];
            }
            // case  3 : new interval is in the range of the current interval, we have an overlap and so we must proceed by selecting the min for the start index and max for the end index 
            else{
                newInterval[0] = min(intervals[i][0], newInterval[0]);
                newInterval[1] = max(intervals[i][1], newInterval[1]);
            }
            
        }
        res.push_back(newInterval);
        return res;
    }
};