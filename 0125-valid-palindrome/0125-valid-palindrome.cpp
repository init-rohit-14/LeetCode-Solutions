class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        string str = "";
        while (i < s.length()) {
            if (isalnum(s[i])) {
                str += tolower(s[i]);
                i++;
            } else
                i++;
        }
        string rev = str;
        reverse(rev.begin(), rev.end());
        if (str != rev)
            return false;
        else
            return true;
    }
};