class Solution {
public:
    bool isValid(string s) {
        stack<char> compareStack;
        for(char c : s){
            if(c == '[' || c == '{' || c == '('){
                compareStack.push(c);
            }else if (c == ']'){
                if (compareStack.empty()) return false;
                char stackPop = compareStack.top();
                compareStack.pop();
                if(stackPop != '['){
                    return false;
                }
            }else if (c == '}'){
                if (compareStack.empty()) return false;
                char stackPop = compareStack.top();
                compareStack.pop();
                if(stackPop != '{'){
                    return false;
                }
            }else if (c == ')'){
                if (compareStack.empty()) return false;
                char stackPop = compareStack.top();
                compareStack.pop();
                if(stackPop != '('){
                    return false;
                }
            }else{
                return false;
            }
        }
        return compareStack.empty();
    }
};
