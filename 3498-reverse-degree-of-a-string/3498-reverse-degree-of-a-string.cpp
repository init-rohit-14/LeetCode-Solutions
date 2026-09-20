class Solution {
public:
    int reverseDegree(string s) {
        int reversePos;
        int output = 0;
        for (int i = 0; i < s.length(); i++) {
            reversePos = 26 - (s[i] - 'a');
            output += (reversePos * (i + 1));
        }
        return output;
    }
};