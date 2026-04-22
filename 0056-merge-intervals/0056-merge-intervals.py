class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        if(len(intervals) == 1):
            return intervals

        intervals.sort()

        op = []
        op.append(intervals[0])

        prevEnd = op[0][1]
        
        for i in range(1, len(intervals)):
            currStart = intervals[i][0]
            currEnd = intervals[i][1]
            prevEnd = op[-1][1]

            if prevEnd >= currStart:
                op[-1][1] = max(prevEnd, currEnd)
            else:
                op.append(intervals[i])

        return op