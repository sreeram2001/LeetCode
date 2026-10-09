class Solution {
    public int mostFrequentEven(int[] nums) {
        
        HashMap<Integer, Integer> freq = new HashMap<>();
        int op = -1;
        int maxFreq = 0;

        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]%2 == 0)
            {
                freq.put(nums[i], freq.getOrDefault(nums[i], 0) + 1);
            }
        }

        for(Integer f : freq.keySet())
        {
            int count = freq.get(f);
            if(maxFreq < count)
            {
                maxFreq = count;
                op = f;
            }
            else if(maxFreq == count)
            {
                op = Math.min(op, f);
            }
        }

        return op;
    }
}