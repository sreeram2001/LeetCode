class Solution:
    def minSumOfLengths(self, arr: List[int], target: int) -> int:
        n = len(arr)
        totalMinLength = n+1

        
        minLenSoFar = n+1
        #PREFIX SUM
        prefixMinLen = [n+1]*(n+1)
        prefixMap = {0:-1}
        currentSum = 0
        for i in range(len(arr)):
            currentSum += arr[i]

            if (currentSum - target) in prefixMap:
                j = prefixMap[currentSum - target]

                minLenSoFar = min(minLenSoFar, i-j)

            prefixMinLen[i+1] = minLenSoFar
            prefixMap[currentSum] = i


        #SUFFIX SUM
        suffixMap = {0:n}
        currentSum = 0
        minLenSoFar = n+1

        for i in range(n-1, -1, -1):
            currentSum += arr[i]

            if (currentSum - target) in suffixMap:
                j = suffixMap[currentSum - target]
                minLenSoFar = min(minLenSoFar, j-i)

            suffixMap[currentSum] = i

            firstLength = prefixMinLen[i]
            secondLength = minLenSoFar

            if firstLength != n+1 and  secondLength != n+1:
                totalMinLength = min(totalMinLength, firstLength + secondLength)

        if totalMinLength <= n:
            return totalMinLength
        else:
            return -1

        




















        
        