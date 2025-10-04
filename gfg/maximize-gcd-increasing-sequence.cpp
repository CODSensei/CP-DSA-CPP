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
    vector<int> maxGcdSeq(int n, int m) {
        // code here
        vector<int> ans;
        int minSum = m * (m + 1) / 2;
        if (minSum > n) return {-1};
        
        int a = n / minSum;
        
        if (a == 0) ans.push_back(-1);
        else {
            int r = 1;
            for(int x = 1; x*x <= n; x++){
                if (n % x != 0) continue;
                if (x <= a && x > r) r = x;
                if (n / x <= a && n / x > r) r = n / x;
            }
            
            for(int i = 1; i < m; i++) ans.push_back(r * i);
            
            int last = n - r * (m * (m - 1) / 2);
            ans.push_back(last);
        }
        
        return ans;
        
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
