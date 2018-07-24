// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Note that an empty string is also considered valid.

// Example 1:

// Input: "()"
// Output: true
// Example 2:

// Input: "()[]{}"
// Output: true
// Example 3:

// Input: "(]"
// Output: false
// Example 4:

// Input: "([)]"
// Output: false
// Example 5:

// Input: "{[]}"
// Output: true

#include <string>
#include <stack> 
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0;i<s.size();i++){
            switch(s[i]){
                case '(':
                    st.push(s[i]);
                    break;
                case ')':
                    if(!st.empty())
                    {
                        char a = st.top();
                        if (a != '(')
                            return false;
                        st.pop();
                    }
                    else
                        return false;
                    break;
                case '[':
                    st.push(s[i]);
                    break;
                case ']':
                    if(!st.empty())
                    {
                        char a = st.top();
                        if (a != '[')
                            return false;
                        st.pop();
                    }
                    else
                        return false;
                    break;
                case '{':
                    st.push(s[i]);
                    break;
                case '}':
                    if(!st.empty())
                    {
                        char a = st.top();
                        if (a != '{')
                            return false;
                        st.pop();
                    }
                    else
                        return false;
                    break;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};