class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        l = 0
        r = len(numbers)

        dict = {}

        for i in range(len(numbers)):
            bal = target - numbers[i]
            
            if bal in dict:
                return [dict[bal], i+1]
            
            dict[numbers[i]] = dict.get(numbers[i], i)+1

        return [-1,-1]