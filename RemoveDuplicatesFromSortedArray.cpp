class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 1;
        for(int i = 0; i < nums.size(); i++){
            int j = i+1;
            while(j<nums.size() && nums[j] <= nums[i]){
                j++;
            }
            if(j < nums.size()){
                nums[i+1] = nums[j];
                res++;
            }
            else{
                break;
            }
        }
        return res;
    }
};
