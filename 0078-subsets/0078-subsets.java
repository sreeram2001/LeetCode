class Solution {

    List<List<Integer>> op = new ArrayList<>();

    public List<List<Integer>> subsets(int[] nums) {
        recurse(nums, new ArrayList<>(), 0);
        return op;
    }

    private void recurse(int[] nums, List<Integer> curr, int index)
    {
        if(index >= nums.length)
        {
            op.add(new ArrayList<>(curr));
            return;
        }

        //include it
        curr.add(nums[index]);
        recurse(nums, curr, index+1);
        curr.remove(curr.size()-1);

        //not including
        recurse(nums, curr, index+1);
    }

}