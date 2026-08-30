class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> solutions;
        for (int i = 0; i < nums.size(); i++){
            if (solutions.contains(target - nums[i])) return vector<int> {solutions[target - nums[i]], i};
            solutions.insert({nums[i], i});
        }
    }
};
