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
    int etf(int n) {
        // code here
        int result = n;
        for(int p = 2; p * p <= n; ++p){
            if (n%p == 0){
                while (n % p == 0) n/=p;
                result -= result / p;
            }
        }
        
        if (n > 1) result -= result / n;
        return result;
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
