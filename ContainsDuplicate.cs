public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        HashSet<int> hs = new HashSet<int>();
        for(int x = 0; x < nums.Length; x++){
            if(!hs.Add(nums[x])){
                return true;
            }
        }
        return false;
    }
}
