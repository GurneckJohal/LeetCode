public class Solution {
    public bool IsAnagram(string s, string t) {
        Dictionary<char, int> sCount = new Dictionary<char,int>();
        Dictionary<char, int> tCount = new Dictionary<char,int>();
        if(s.Length != t.Length){
            return false;
        }
        for(int i = 0; i < s.Length; i++){
            sCount[s[i]] = sCount.ContainsKey(s[i]) ? sCount[s[i]] + 1 : 1;
            tCount[t[i]] = tCount.ContainsKey(t[i]) ? tCount[t[i]] + 1 : 1;
        }
        foreach(KeyValuePair<char,int> kvp in sCount){
            int value = -1;
            tCount.TryGetValue(kvp.Key,out value);
            if(value != kvp.Value){
                return false;
            }
        }
        
        return true;
    }
}
