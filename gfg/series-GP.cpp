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
    const int M = 1e9 + 7;
    
    int powMod(int x, int n){
        int result = 1;
        x = x % M;
        
        while(n >= 1){
            if (n & 1){
                result = (1LL * result * x) % M;
            } 
            x = (1LL * x * x) % M;
            n/=2;
        }
        return result;
    }
    
    int nthTerm(int a, int r, int n) {
        // code here
        return (1LL * a * powMod(r,n-1)) % M;
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
