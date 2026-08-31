class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (auto &num : nums){
            count[num]++;
        }
        vector<pair<int, int>> ordered;
        for (auto counts : count){
            ordered.push_back({counts.second, counts.first});
        }
        std::sort(ordered.rbegin(), ordered.rend());

        vector<int> result;
        for (int i = 0; i < k; i++){
            result.push_back(ordered[i].second);
        }
    return result;
    }
};
