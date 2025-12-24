class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 1) return intervals;
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        int prevInd;

        for(int i=1;i<intervals.size();i++)
        {   
            prevInd = merged.back()[1];
            if( prevInd >= intervals[i][0])
            {
                merged.back()[1] = max(prevInd, intervals[i][1]);
            }
            else
            {
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};