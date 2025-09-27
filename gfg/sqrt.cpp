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
    int floorSqrt(int n) {
        // code here
        int i = 1, j = n, mid, ans = 0;
        while(i <= j){
            mid = i + (j - i) / 2;
            if (mid == n / mid ){
                ans = mid;
                break;
            } else if (mid > n / mid) {
                j = mid - 1;
            } else {
                ans = mid;
                i = mid + 1;
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
