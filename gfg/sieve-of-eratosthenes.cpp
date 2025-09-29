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
    vector<int> sieve(int n) {
        // code here
        vector<bool> prime(n+1,true);
        for(int p = 2; p * p <= n; p++){
            if (prime[p]){
                for(int i = p*p; i <= n; i+=p){
                    prime[i] = false;
                }
            }
        }
        vector<int> res;
        for(int i = 2; i <= n; i++){
            if (prime[i]) res.push_back(i);
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
