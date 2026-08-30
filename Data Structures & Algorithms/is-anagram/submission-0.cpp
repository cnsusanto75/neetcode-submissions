class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> chars;
        for (auto c : s){
            chars.insert({c, 0});
            chars[c]++;
        }
        for (auto c : t){
            chars.insert({c, 0});
            chars[c]--;
        }
        for (auto[c, i] : chars){
            if (i != 0) return false;
        }
        return true;
    }
};
