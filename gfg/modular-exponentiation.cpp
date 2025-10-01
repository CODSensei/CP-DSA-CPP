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
    int powMod(int x, int n, int M) {
        // code here
        int res = 1;
        
        while(n >= 1){
            
            if(n & 1) {
                res = (1LL * res * x) % M;
                n--;
            }
            else {
                x = (1LL * x * x) % M;
                n /= 2;
            }
        }
        
        return res;
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
