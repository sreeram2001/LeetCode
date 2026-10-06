class Solution {
    public boolean containsDuplicate(int[] nums) {
        
        Set<Integer> vis = new HashSet<>();

        for(int n:nums)
        {
            if( vis.contains(n))
            {
                return true;
            }

            vis.add(n);
        }

        return false;
    }
}