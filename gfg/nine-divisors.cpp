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
    int countNumbers(int n) {
        // Code Here
        int c = 0;
        int limit = sqrt(n);
        
        int prime[limit + 1];
        for(int i = 1; i <= limit; i++) prime[i] = i;
        
        for(int i = 2; i*i <= limit; i++){
            if (prime[i] == i){
                for(int j = i * i; j <= limit; j+=i) {
                    if (prime[j] == j) prime[j] = i;
                }
            }
        }
        
        for(int i = 2; i <= limit; i++){
            int p = prime[i];
            int q = prime[i / prime[i]];
            
            if (p * q == i && q != 1 && p != q) c+=1;
            else if (prime[i] == i && pow(i,8) <= n) c+=1;
        }
        
        return c;
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
