using namespace std;

void permutees(vector<vector<int>> &result, vector<int> &nums, vector<int> &empty){
    if(empty.size()==nums.size()){
        result.push_back(empty);
    }
    else{
        for(int i = 0; i<nums.size(); i++){
            if(find(empty.begin(),empty.end(),nums[i])==empty.end()){
                empty.push_back(nums[i]);
                permutees(result, nums,empty);
                empty.erase(empty.begin() + empty.size()-1);
            }
        }
    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> answer;
        permutees(result,nums,answer);
        return result;
    }
};
