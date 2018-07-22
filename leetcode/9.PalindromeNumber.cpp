// Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

// Example 1:

// Input: 121
// Output: true

// Example 2:

// Input: -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:

// Input: 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

// Follow up:

// Coud you solve it without converting the integer to a string?

#include<climits>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int m = x;
        vector <int> s(10);
        int t = 0;
        int result = 0;
        while(x!=0){
            s.push_back(x % 10);
            x /= 10;
        }

        for (int i = s.size()-1; i>=0;i--){
            if(s[i]!=0){
                t = i;
                break;
            }
        }

        for(int i = 0; i<t;i++){
            result = result*10 + s[i];
        }

        if(result > 0){
            if(result < INT_MAX/10)
                result = result*10 + s[t];
            else if(result == INT_MAX/10)
                if(s[t] <= 7)
                    result = result*10 + s[t];
                else
                    result = 0;
            else
                result = 0;
        }
        else{//负数的情况
            if(result > INT_MIN/10)
                result = result*10 + s[t];
            else if(result == INT_MIN/10)
                if(s[t] <= 8)
                    result = result*10 + s[t];
                else
                    result = 0;
            else
                result = 0;
        }
        if(m<0)
            return false;
        else{
            if(result == m)
                return true;
            else
                return false;
        }
    }
};