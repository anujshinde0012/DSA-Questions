class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> bracket_map = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char c : s) {
            if (bracket_map.count(c)) { // If it's a closing bracket
                if (stack.empty() || stack.top() != bracket_map[c]) {
                    return false;
                }
                stack.pop(); // Pop the matching opening bracket
            } else {
                stack.push(c); // Push opening brackets onto the stack
            }
        }
        
        return stack.empty(); // The stack should be empty for a valid string
    }

};