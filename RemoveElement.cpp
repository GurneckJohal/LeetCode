class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                int j = i+1;
                while(j < nums.size() && nums[j] == val){
                    j++;
                }
                if(j < nums.size()){
                    nums[i] = nums[j];
                    nums[j] = val;
                }
                else{
                    return res;
                }
            }
            res++;
        }
        
        return res;
    }
};
