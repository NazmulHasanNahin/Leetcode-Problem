// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/
class Solution 
{
public:
    string firstPalindrome(vector<string>& words) 
    {
        for (int i = 0; i < words.size(); i++) 
        {
            string ss = words[i];
            reverse(ss.begin(), ss.end());
            if (words[i] == ss) 
            {
                return words[i];
            }
        }
        return "";
    }
};