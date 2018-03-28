/*
Thinking:
Don't forget to check overflow.

long long res;
...
return (res > INT_MAX || res < INT_MIN) 0:res;

also can do it.But it use 'long long'.
*/
static int some = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x) {
            int temp = res * 10 + x % 10;
            if (temp / 10 != res)
                return 0;
            res = temp;
            x /= 10;
        }
        return res;
    }
};
