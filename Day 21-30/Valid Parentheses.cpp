class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                brackets.push(c); // Push opening brackets onto the stack
            } else {
                if (brackets.empty()) {
                    return false; // No matching opening bracket
                }
                
                char top = brackets.top();
                if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                    brackets.pop(); // Matching bracket found, pop from the stack
                } else {
                    return false; // Mismatched brackets
                }
            }
        }
        
        return brackets.empty(); // If the stack is empty, all brackets are matched.
    }
};
