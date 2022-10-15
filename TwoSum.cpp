class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> res;
        for(int x = 0; x < nums.size(); x++){
            if(map.find(target-nums[x]) != map.end() && map[target-nums[x]] != x){
                res.push_back(map[target-nums[x]]);
                res.push_back(x);
                break;
            }
            map[nums[x]] = x;
        }
        return res;
    }
};
