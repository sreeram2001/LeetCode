class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int counter = 1;
        int i=1, j=1;
        int total=1;

        while(j < nums.size())
        {
            if(nums[j] == nums[i-1] && counter < 2)
            {
                nums[i] = nums[j];
                counter++;
                total++;
                j++;
                i++;
            }
            else if(nums[j] != nums[i-1])
            {
                nums[i] = nums[j];
                counter = 1;
                total++;
                j++;
                i++;
            }
            else
            {
                j++;
            }

        }

        return total;
    }
};