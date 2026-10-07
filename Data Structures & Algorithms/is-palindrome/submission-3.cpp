class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r){
            while (!isalpha(s[l]) && !isdigit(s[l])) l++;
            while (!isalpha(s[r]) && !isdigit(s[r])) r--;
            if (l > r) break;
            if (tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};
