class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans(2,0);
        for (int i=0; i<nums.size(); i++)
        {
            int j = find (nums.begin()+i+1, nums.end(), target-nums[i]) - nums.begin();
            if ( j<nums.size() ) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
        return ans;
    }
};
