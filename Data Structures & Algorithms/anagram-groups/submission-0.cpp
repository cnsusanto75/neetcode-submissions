class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> solution;
        for (auto word : strs){
            string sorted = word;
            std::sort(sorted.begin(), sorted.end());
            solution.insert(std::make_pair(sorted, std::vector<string>{}));
            solution[sorted].push_back(word);

        }
        vector<vector<string>> result;
        for (auto [sorted, words] : solution){
            result.push_back(solution[sorted]);
        }
        return result;
    }
};
