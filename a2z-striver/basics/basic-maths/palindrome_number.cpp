class Solution {
public:
    bool isPalindrome(int x) {

        // T.C. :- O(logN with base 10)
        // S.C. :- O(1)
        if (x < 0) return false;
        int n = x;
        int rev = 0, rem;
        while(n){
            rem = n % 10;
            n = n / 10;
            if (rev < INT_MIN % 10 || rev > INT_MAX / 10) return false;
            rev = rev * 10 + rem;
        }
        return rev == x;
    }
};