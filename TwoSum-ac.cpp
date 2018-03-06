class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> result;
        for(int i = 0;i < nums.size();i++){
            int toFind = target - nums[i];
            if(hash.find(toFind) != hash.end()){
                result.push_back(hash[toFind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};
