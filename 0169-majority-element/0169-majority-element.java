class Solution {
    public int majorityElement(int[] nums) {
        
        int counter = 0;
        int currNum = 0;

        for(int i=0;i<nums.length;i++)
        {
            if(counter == 0)
            {
                currNum = nums[i];
            }

            if(currNum == nums[i])
            {
                counter++;
            }
            else
            {
                counter--;
            }
        }

        return currNum;
    }
}