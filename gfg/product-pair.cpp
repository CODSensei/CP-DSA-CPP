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
    bool isProduct(vector<int> arr, long long x) {
        // code here
        sort(arr.begin(), arr.end());
        int l = 0, r = arr.size() - 1;
        while(l <= r){
            if (1LL*arr[l]*arr[r] == x) return true;
            if (arr[r] < x/arr[l]) l++;
            else r--;
        }
        return false;
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
