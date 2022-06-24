

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
class Solution{
    public:
vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};
