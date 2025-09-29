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
    
    int gcdExtended(int a, int b, int &x, int &y){
        if (a == 0){
            x = 0;
            y = 1;
            return b;
        }
        int x1, y1;
        int gcd = gcdExtended(b % a, a, x1,y1);
        x = y1 - (b / a) * x1;
        y = x1;
        
        return gcd;
    }
    
    int modInverse(int b, int M){
        int x,y;
        int g = gcdExtended(b,M,x,y);
        if (g != 1) return -1;
        
        return (x % M + M) % M;
    }
  
    int modDivide(int a, int b, int M) {
        // code here
        a %= M;
        int inv = modInverse(b,M);
        
        if (inv == -1) return -1;
        
        return (1LL * a * inv) % M;
        
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
