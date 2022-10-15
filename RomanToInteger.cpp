class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<string,int> map = {
            {"I",1},
            {"V",5},
            {"X",10},
            {"L",50},
            {"C",100},
            {"D",500},
            {"M",1000},
            {"IV",4},
            {"IX",9},
            {"XL",40},
            {"XC",90},
            {"CD",400},
            {"CM",900}
        };
        for(int x = 0; x < s.length(); x++){
            string key = "";
            key.push_back(s.at(x));
            if(x+1 < s.length()){
                key.push_back(s.at(x+1));
                x++;
                if(map.find(key) == map.end()){
                    key.pop_back();
                    x--;
                }
            }
            res+=map[key];
        }
        return res;
    }
};
