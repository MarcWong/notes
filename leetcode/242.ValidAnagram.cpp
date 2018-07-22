// Given two strings s and t , write a function to determine if t is an anagram of s.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:

// Input: s = "rat", t = "car"
// Output: false

// Note:
// You may assume the string contains only lowercase alphabets.

// Follow up:
// What if the inputs contain unicode characters? How would you adapt your solution to such case?


#include <string>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;

        map<char,int> ms;
        map<char,int>::iterator p;

        for(int i=0;i<s.length();i++){
            p=ms.find(s[i]);
            if(p==ms.end()){
                ms.insert(pair<char,int>(s[i],1));
            }
        }

        for(p = ms.begin();p!=ms.end();p++){
            int snum = count(s.begin(),s.end(),p->first);
            int tnum = count(t.begin(),t.end(),p->first);
            if(snum != tnum)
                return false;
        }

        return true;
    }
};