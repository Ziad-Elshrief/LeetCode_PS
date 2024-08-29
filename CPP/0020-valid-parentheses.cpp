class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for (auto chr : s) {
            if (chr == ')') {
                if ( v.empty() || v.top() != '(') {
                    return false;
                } else {
                    v.pop();
                }
            } else if (chr == ']') {
                if (v.empty() || v.top() != '[') {
                    return false;
                } else {
                    v.pop();
                }
            } else if (chr == '}') {
                if (v.empty() || v.top() != '{') {
                    return false;
                } else {
                    v.pop();
                }
            }else{
            v.push(chr);
        }
        }
        if(v.empty()){
            return true;
        }
        return false;
    }
};
