class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        //sort the given intervals:
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> newInterval;
        newInterval.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            //take care of equal to sign in intervals[i][0]<=newInterval.back()[1]
            if(intervals[i][0]<=newInterval.back()[1]){
                //take care of max(newInterval.back()[1], intervals[i][1])
                newInterval.back()[1]=max(newInterval.back()[1], intervals[i][1]);
            }else{
                newInterval.push_back(intervals[i]);
            }
            
            
        }
        return newInterval;
    }
};