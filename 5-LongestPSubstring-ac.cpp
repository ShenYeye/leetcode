
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        if(s.size() == 1) return s;
        int start = 0,maxlen = 1;
        for(int i = 0;i < s.size();){
            if(s.size() - i <= maxlen / 2) break;
            int left = i,right = i;
            while(right < s.size() - 1 && s[right] == s[right + 1]) ++right;
            i = right + 1;
            while(right < s.size() - 1 && left > 0 && s[right + 1] == s[left - 1]) {++right; --left;}
            int len = right - left + 1;
            if(len > maxlen) {
                start = left;
                maxlen = len;
            }
        }
        return s.substr(start,maxlen);
    }
};
