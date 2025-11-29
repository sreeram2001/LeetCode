class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        if(intervals.size() == 1) return 1;

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            if(a[0] == b[0])
            {
                return a[1] > b[1];
            }
            else
            {
                return a[0] < b[0];
            }
        });

        int maxEnd = intervals[0][1];
        int nonremoved = 1;

        for(int i=1;i<intervals.size();i++)
        {
            if(maxEnd < intervals[i][1])
            {
                maxEnd = intervals[i][1];
                nonremoved++;
            }
        }

        return nonremoved;
    }   
};