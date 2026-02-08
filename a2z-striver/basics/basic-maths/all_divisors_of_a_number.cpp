class Solution {
  public:
    // T.C. :- O(sqrt(N))
    // S.C. :- O(2 * sqrt(N))
    void print_divisors(int n) {
        // Code here.
        vector<int> ans;
        for(int i = 1; i * i <= n; i++){
            if (n % i == 0) {
                ans.push_back(i);
                if (n/i != i) ans.push_back(n/i);
            }
        }
        sort(ans.begin(),ans.end()); // O(nlogn)
        for(int num: ans) cout << num << " ";
    }
};