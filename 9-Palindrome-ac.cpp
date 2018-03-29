/*
Thinking:
Reverse the number till half and compare them.
*/

static int some = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0  || (x != 0 && x % 10 == 0)) return false;
        int num = 0;
        while(x > num){
            num = num * 10 + x % 10;
            x /= 10;
        }
        return (num == x || x == num /10);
    }
};
