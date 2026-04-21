class Solution {
    public int maximumCount(int[] nums) {
        
        int pos = binarySearch(nums, 1);

        int neg = binarySearch(nums, 0);

        return Math.max(neg, nums.length - pos);
    }

    private int binarySearch(int[] nums, int target)
    {
        int l = 0, r = nums.length-1;
        int op = nums.length;

        while(l <= r)
        {
            int mid = (l+r)/2;

            if(nums[mid] >= target)
            {
                op = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return op;
    }
}