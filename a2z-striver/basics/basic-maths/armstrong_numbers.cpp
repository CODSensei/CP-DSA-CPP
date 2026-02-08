// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int x = n;
        int rem, sum = 0;
        while(x){
            rem = x % 10;
            x = x / 10;
            sum = sum + (1LL * rem * rem * rem);
        }
        return sum == n;
    }
};