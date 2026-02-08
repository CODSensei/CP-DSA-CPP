class Solution {
public:
    
    // time complexity:- O(logN with base 10)
    // space complexity:- O(1)
    int reverse(int x) {
        int rem = 0, ans = 0;
        while(x){
            rem = x % 10;
            x = x / 10;
            if (ans < INT_MIN / 10 || ans > INT_MAX / 10) return 0; // catches overflow and underflow
            ans = ans * 10 + rem;
        }
        return ans;
    }
};