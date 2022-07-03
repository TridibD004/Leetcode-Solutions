class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int l = 0, r = nums.size() - 1, m;
        while(l <= r) {
            m = (r - l)/ 2 + l;
            if(nums[m] == target) r = m - 1;
            else if(nums[m] > target) r = m - 1;
            else if(nums[m] < target) l = m + 1;
        }
        if(l >= nums.size() || nums[l] != target) return {-10, -10};
        ans.push_back(l);
        
        l = 0, r = nums.size() - 1;
        while(l <= r) {
            m = (r - l)/ 2 + l; 
            if(nums[m] == target) l = m + 1;
            else if(nums[m] > target) r = m - 1;
            else if(nums[m] < target) l = m + 1;
        }
        ans.push_back(r);
        
        return ans;
    }
};
