#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

class Solution {
  public:
  
  int fastPow(int base, int exp){
      int result = 1;
      while(exp > 0){
          if (exp & 1) result *= base;
          base *= base;
          exp >>= 1;
      }
      return result;
  }
    int countValid(int n, vector<int>& arr) {
        // code here
        bool good[10] = {};
        for(int d: arr) good[d] = true;
        int f = 0, f0 = 0;
        for(int d = 0; d < 10; d++) {
            if (!good[d]) {
                f++;
                if (d != 0) f0++;
            }
        }
        
        int total = 9 * fastPow(10,n - 1);
        int noneAllowed = (n == 1 ? f0 : f0 * fastPow(f, n - 1));
        return total - noneAllowed;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<long long> copy_a = a;
        sort(copy_a.begin(), copy_a.end());
        if (copy_a == a || k > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
