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
  
    bool isPrime(int n){
        if (n <= 1) return false;
        for(int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) return false;
        }
        
        return true;
    }
  
    vector<int> primeFac(int n) {
        // code here
        vector<int> ans;
        
        for(int i = 1; i <= sqrt(n); i++){
            if (n%i == 0){
                if ((n/i == i) && isPrime(i)) ans.push_back(i);
                else {
                    if (isPrime(i)) ans.push_back(i);
                    if (isPrime(n/i)) ans.push_back(n/i);
                }
            }
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
