// Given a List of words, return the words that can be typed using letters of alphabet on only one row's of American keyboard like the image below.

// American keyboard

// Example 1:

// Input: ["Hello", "Alaska", "Dad", "Peace"]
// Output: ["Alaska", "Dad"]

// Note:

//     You may use one character in the keyboard more than once.
//     You may assume the input string will only contain letters of alphabet.

#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> output;
        for(int i = 0; i<words.size();i++){
            if(isInOneRow(words[i]))
                output.push_back(words[i]);
        }
        return output;
    }
    bool isInOneRow(string word){
        string str1("qwertyuiopQWERTYUIOP");
        string str2("asdfghjklASDFGHJKL");
        string str3("zxcvbnmZXCVBNM");
        int in1 = 0, in2 = 0, in3 = 0;
        for(int i=0;i<word.size();i++){
            int pos1=str1.find_first_of(word[i]);
            if(pos1 != -1)
                in1 = 1;
            int pos2=str2.find_first_of(word[i]);
            if(pos2 != -1)
                in2 = 1;
            int pos3=str3.find_first_of(word[i]);
            if(pos3 != -1)
                in3 = 1;
            if(in1 + in2 + in3 > 1)
                return false;
        }
        return true;
    }
};