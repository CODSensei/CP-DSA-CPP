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
    int countDivisible(vector<int>& arr, int m) {
        // code here
        int n = arr.size(), odd = 0, even = 0;
        
        int powerset = 1 << n;
        
        for(int i = 1; i < powerset; i++){
            int p = 1;
            for(int j = 0; j < n; j++){
                if (i & (1 << j)){
                    p *= arr[j];
                    
                    if (p > m) break;
                }
            }
            
            if (p > m) continue;
            
            (__builtin_popcount(i) & 1) ? (odd += (m / p)) : (even += (m / p));
        }
        
        return odd - even;
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
