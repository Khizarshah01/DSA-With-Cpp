class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=1;
        int i;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[x] = nums[i];
                x++;
            }
            
        }
        return x;
    }    
    
        
};
