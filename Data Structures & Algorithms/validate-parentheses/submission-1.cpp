class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for (auto c : s){
            if (c == '(' || c == '[' || c == '{'){
                open.push(c);
            }
            else if (open.empty()) return false;
            if (c == ')'){
                if (open.top() == '(') open.pop();
                else return false;
            }
            if (c == ']'){
                if (open.top() == '[') open.pop();
                else return false;
            }
            if (c == '}'){
                if (open.top() == '{') open.pop();
                else return false;
            }
        }
        if (open.empty()) return true;
        return false;
    }
};
