// Given a 32-bit signed integer, reverse digits of an integer.

// Example 1:

// Input: 123
// Output: 321

// Example 2:

// Input: -123
// Output: -321

// Example 3:

// Input: 120
// Output: 21

// Note:
// Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.


#include<climits>
#include<vector>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        vector <int> s(10);

        int t = 0;
        int result = 0;
        while(x!=0){
            s.push_back(x % 10);
            x /= 10;
        }

        for (int i = s.size() - 1; i>=0;i--){
            if(s[i]!=0){//最高位不是0的决定了反转后的位数
                t = i;
                break;
            }
        }

        for(int i = 0; i < t;i++){
            result = result * 10 + s[i];
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
        else{//负数
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
        return result;
    }
};