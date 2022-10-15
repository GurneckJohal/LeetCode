class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int x = 0; x < strs[0].length(); x++){
            char ch = strs[0].at(x);
            for(string s : strs){
                if(x < s.length()){
                    if(s.at(x) != ch){
                        return res;
                    }
                }
                else{
                    return res;
                }
            }
            res.push_back(ch);
        }
        return res;
    }
};
