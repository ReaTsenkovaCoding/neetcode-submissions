class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        stack<char> brackets_stack;
        for(auto ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                brackets_stack.push(ch);
            }
            else if (brackets_stack.empty()){
                return false;
            }
            else if(brackets_stack.top() != brackets[ch]){
                return false;
            }
            else{
                brackets_stack.pop();
            }
        }
        return brackets_stack.empty();
    }
};
