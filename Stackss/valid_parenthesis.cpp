#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string s) {
    std::stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        // if opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            // for closing brackets
            if (!st.empty()) {
                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }

    return st.empty();
}