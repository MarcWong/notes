// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
// Note:

// All given inputs are in lowercase letters a-z.

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res;
        if(n == 0)return res;
        for(int pos = 0; pos < strs[0].size(); pos++)
        {
            for(int k = 1; k < n; k++)
            {
                if(strs[k].size() == pos || strs[k][pos] != strs[0][pos])
                    return res;
            }
            res.push_back(strs[0][pos]);
        }
        return res;
    }
};