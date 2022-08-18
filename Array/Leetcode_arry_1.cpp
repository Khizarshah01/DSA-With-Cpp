//link
//https://leetcode.com/problems/remove-element/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size();
        int ind=0;
      while(ind<len)
      {
       if(nums[ind]==val)
       {
           nums[ind]=nums[len-1];
               --len;
       }
       else ++ind;
      }
        return len;
    }        
};
