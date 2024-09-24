class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) return s;

        string res;
        int cycleLength = 2 * numRows - 2; 

        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j + i < s.length(); j += cycleLength) {
                res += s[j + i];
                if (i != 0 && i != numRows - 1 && j + cycleLength - i < s.length()) {
                    res += s[j + cycleLength - i]; 
                }
            }
        }
        
        return res;
    }
};
