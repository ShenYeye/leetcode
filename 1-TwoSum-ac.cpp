class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> res;
        for(int i = 0;i < nums.size();i++){
            int toFind = target - nums[i];
            if(hash.find(toFind) != hash.end()){
                res.push_back(hash[toFind]);
                res.push_back(i);
                return res;
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};
