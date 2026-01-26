class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        if(intervals.size() == 1) return 0;

        sort(intervals.begin(), intervals.end());
        int removed = 0;

        int prevEnd = intervals[0][1];
        int prevBegin = intervals[0][0];

        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0] < prevEnd)
            {
                removed++;
                prevEnd = min(prevEnd,intervals[i][1]);
            }
            else
            {
                prevBegin = intervals[i][0];
                prevEnd = intervals[i][1];
            }
        }

        return removed;
    }
};