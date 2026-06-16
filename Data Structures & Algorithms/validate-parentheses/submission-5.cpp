class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        int len =s.length();
        if(len == 1) {
            return false;
        }
        
        for(int i =0;i<len;i++) {
            if(s[i] == '(' || s[i] ==  '{' || s[i] ==  '[') {
                str.push(s[i]);
            }
             else {
                if (str.empty()) {
                    return false;
                }

                if ((str.top() == '[' && s[i] == ']') ||
                    (str.top() == '{' && s[i] == '}') ||
                    (str.top() == '(' && s[i] == ')')) {
                    str.pop();
                } 
                else {
                    return false;
                }
            }
        }

        return str.empty();
    }
};
