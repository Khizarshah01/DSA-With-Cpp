//Link
// https://leetcode.com/problems/subsets/submissions/
class Solution {   
private:
    void sol(vector<int> nums, vector<int> out, int i, vector<vector<int> >& ans) {
    
        //base condition
        if(i>=nums.size())
        {
            ans.push_back(out);
            return ;
        }
        //exuluding
        sol(nums,out,i+1,ans);
        
        //including
        int ele=nums[i];
        out.push_back(ele);
        sol(nums,out,i+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i=0;
        sol(nums,output,i,ans);
        return ans;
    }
};
