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
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size(), maxProd = INT_MIN, ltr = 1, rtl = 1;
        for(int i = 0; i < n; i++){
            if (ltr == 0) ltr = 1;
            if (rtl == 0) rtl = 1;
            
            ltr *= arr[i];
            
            int j = n - i - 1;
            rtl *= arr[j];
            maxProd = max({ltr, rtl, maxProd});
        }
        
        return maxProd;
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
