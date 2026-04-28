class Solution:
    def minOperations(self, grid: List[List[int]], x: int) -> int:

        arr1d = []

        for i in range(len(grid)):
            for j in range(len(grid[i])):
                arr1d.append(grid[i][j])
        
        arr1d.sort()
        median = arr1d[len(arr1d)//2]

        counter = 0
        for i in range(len(arr1d)):
            if abs(arr1d[i]-median)%x != 0:
                return -1
            
            counter += abs(arr1d[i]-median)//x 

        return counter


        