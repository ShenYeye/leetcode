/*
Thinking:
(We can use sync_with_stdio(false) to reduce runtime greatly.
It eliminates iostream's input and output cache.)
We should consider every possible situation:
empty string;
sign of number;
overflow;
valiable.
*/

static int some = [](){
    ios::sync_with_stdio(false); //Eliminates iostream's input and output cache.
    cin.tie(nullptr); //A function that binds two stream.
    return 0;
}();
class Solution {
public:
    int myAtoi(string str) {
        if(str.empty())
            return 0;
        auto i = 0;
        while(str[i] == ' ' || str[i] == '0' && i < str.length())
            i++;
        auto sign = 1;
        if(str[i] == '-'){
            sign = -1;
            i++;
        }
        else if(str[i] == '+'){
            sign = 1;
            i++;
        }
        auto ret = 0;
        for(i;i < str.length();++i){
            auto s = str[i];
            auto val = 0;
            if(s >= '0' && s <= '9')
                val = s - '0';
            else break;
            if(ret > INT_MAX / 10 || (ret == INT_MAX / 10 && val > 7))
                return sign > 0 ? INT_MAX : INT_MIN;
            ret *= 10;
            ret += val;
        }
        return ret * sign;
    }
};
