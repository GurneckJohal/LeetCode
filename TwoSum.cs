public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> d = new Dictionary<int,int>();
        int[] res = new int[2];
        for(int i = 0; i < nums.Length; i++){
            int value = -1;
            if(d.TryGetValue(target - nums[i], out value)){
                if(value != i){
                    res[0] = d[target - nums[i]];
                    res[1] = i;
                }
            }
            else{
                d[nums[i]] = i;
            }
        }
        return res;
    }
}
