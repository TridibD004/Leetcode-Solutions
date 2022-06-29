class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    if(nums.size() < 3)
    {
        return res;
    }
    
    for(int i = 0; i<nums.size()-2;i++)
    {
        
        if(i==0 || i>0 && nums[i] != nums[i-1])
        {
            int low = i+1;
            int high = nums.size()-1;
            int sum = 0 - nums[i];
            
            while(low<high)
            {
                vector<int> ans;
                if(nums[low] + nums[high] == sum)
                    {
                       ans.insert(ans.end(),{nums[i],nums[low],nums[high]});
                       res.push_back(ans);
                    while(low<high && nums[low] == nums[low+1])
                    {
                        low++;
                    }
                    while(low<high && nums[high] == nums[high-1])
                    {
                        high--;
                    }
                    low++;
                    high--;
                }
                else if(nums[low] + nums[high] > sum)
                {
                    high--;
                }
                else{
                    low++;
                }
            }
        }
    }
    return res;
    }
};class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    if(nums.size() < 3)
    {
        return res;
    }
    
    for(int i = 0; i<nums.size()-2;i++)
    {
        
        if(i==0 || i>0 && nums[i] != nums[i-1])
        {
            int low = i+1;
            int high = nums.size()-1;
            int sum = 0 - nums[i];
            
            while(low<high)
            {
                vector<int> ans;
                if(nums[low] + nums[high] == sum)
                    {
                       ans.insert(ans.end(),{nums[i],nums[low],nums[high]});
                       res.push_back(ans);
                    while(low<high && nums[low] == nums[low+1])
                    {
                        low++;
                    }
                    while(low<high && nums[high] == nums[high-1])
                    {
                        high--;
                    }
                    low++;
                    high--;
                }
                else if(nums[low] + nums[high] > sum)
                {
                    high--;
                }
                else{
                    low++;
                }
            }
        }
    }
    return res;
    }
};
