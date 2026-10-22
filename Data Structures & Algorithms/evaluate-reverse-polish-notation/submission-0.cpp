class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (auto c : tokens){
            if (c == "+") {
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();
                nums.push(first + second);
            }
            else if (c == "-"){
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();
                nums.push(first - second);
            } 
            else if (c == "*") {
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();
                nums.push(first * second);
            }
            else if (c == "/"){
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();
                nums.push(first / second);
            }
            else nums.push(stoi(c));
        }
        return nums.top();
    }
};
