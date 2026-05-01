class Solution {

    public List<List<Integer>> op = new ArrayList<>();

    public void recursion(int[] candidates, int ind, List<Integer> curr, int target)
    {
        if(target == 0)
        {
            op.add(new ArrayList<>(curr));
            return;
        }

        if(ind == candidates.length || target < 0)
        {
            return;
        }

        //include
        curr.add(candidates[ind]);
        recursion(candidates, ind, curr, target - candidates[ind]);
        curr.remove(curr.size()-1);

        //not include
        recursion(candidates, ind+1, curr, target);
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        
        recursion(candidates, 0, new ArrayList<Integer>(), target);
        return op;
    }
}