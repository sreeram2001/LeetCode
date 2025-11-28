class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size() == 1) return intervals;
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> output;
        int prevEnd = intervals[0][1];
        output.push_back(intervals[0]);

        for(int i=1;i<intervals.size();i++)
        {
            prevEnd = output[output.size()-1][1];
            int currStart = intervals[i][0];
            int currEnd = intervals[i][1];

            if(prevEnd >= currStart)
            {
                output[output.size()-1][1] = max(prevEnd, currEnd);
            }
            else
            {
                output.push_back(intervals[i]);
            }
        }

        return output;
    }
};