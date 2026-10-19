class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<vector<int>> result;
        for (int i = 0; i < nums.size() - 2; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int looking_for = -1 * nums[i];
            int l = i + 1, r = nums.size() - 1;
            while (l < r){
                if (nums[l] + nums[r] < looking_for) l++;
                else if (nums[l] + nums[r] > looking_for) r--;
                else{
                    result.push_back(std::vector<int> {nums[i], nums[l], nums[r]});
                    int left = nums[l];
                    int right = nums[r];
                    while (l < r && nums[l] == left) l++;
                    while (l < r && nums[r] == right) r--;
                }
            }
        }
        return result;
    }
};
