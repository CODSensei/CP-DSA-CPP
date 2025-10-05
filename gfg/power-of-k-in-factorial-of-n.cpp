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
  
    vector<vector<int>> primeFactors(int num){
        vector<vector<int>> factors;
        int count = 0;
        while(num%2 == 0){
            num /= 2;
            count++;
        }
        if (count > 0) factors.push_back({2,count});
        
        for(int i = 3; i*i <= num; i+=2){
            count = 0;
            while(num%i == 0){
                num /= i;
                count++;
            }
            if (count > 0) factors.push_back({i,count});
        }
        
        if(num > 1) factors.push_back({num,1});
        return factors;
    }  
    
    int legendre(int n, int p){
        int count = 0;
        for(int power = p; power <= n; power*= p) count += n / power;
        return count;
    }
  
    int maxKPower(int n, int k) {
        // code here
        vector<vector<int>> factors = primeFactors(k);
        int result = INT_MAX;
        
        for(auto &factor: factors){
            int prime = factor[0];
            int expInK = factor[1];
            int countInFact = legendre(n,prime);
            result = min(result, countInFact / expInK);
        }
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
