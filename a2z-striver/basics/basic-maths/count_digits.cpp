class Solution {
  public:
    int countDigits(int n) {
        // code here
        // 1st approach -> O(logN with base 10 + 1) for both time and space
            int count = 0;
            while(n){
                count++;
                n = n / 10;
            }
            return count;
        
        // 2nd approach -> O(logN with base 10 + 1) for both time and space
            string N = to_string(n);
            return N.size();

        // 3rd approach -> O(1) for both time and space
            return (int)(log10(n)) + 1;
    }
};