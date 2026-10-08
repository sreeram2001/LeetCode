class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        
        List<Integer> op = new ArrayList<>();

        for(int i=0;i<nums.length;i++)
        {
            int val = Math.abs(nums[i]);

            int updIndex = val-1;

            if(nums[updIndex] > 0)
            {
                nums[updIndex] = -nums[updIndex];
            }
        }


        for(int i=0;i<nums.length;i++)
        {
            if(nums[i] > 0)
            {
                op.add(i+1);
            }
        }

        return op;
    }
}