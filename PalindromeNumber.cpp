class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        unsigned int reverse = 0;
        while(y > 0){
            reverse = (reverse*10)+y%10;
            y/=10;
        }
        return reverse == x;
    }
};
