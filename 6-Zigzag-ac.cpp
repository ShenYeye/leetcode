/*
Thinking:
Draw the string in the vertical zigzag.Then read it in every row.
*/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        if(s.empty()) return "";
        vector<string> row(numRows, "");
        int len = s.length(), i = 0;
        while(i < len){
            for(int j = 0; j < numRows && i < len; j++,i++)
                row[j].push_back(s[i]);
            for(int j = numRows - 2;j > 0 &&i < len; j--,i++)
                row[j].push_back(s[i]);
        }
        string result;
        for(string r : row)
            result += r;
        return result;
    }
};
