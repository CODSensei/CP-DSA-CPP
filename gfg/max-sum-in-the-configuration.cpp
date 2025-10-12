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
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int currSum = 0, currVal = 0, ans;
        
        for(auto i: arr) currSum += i;
        for(int i = 0; i < n; i++) currVal += i * arr[i];
        
        ans = currVal;
        for(int i = 1; i < n; i++){
            int nextVal = currVal - (currSum - arr[i - 1]) + arr[i - 1] * (n - 1);
            currVal = nextVal;
            ans = max(ans, nextVal);
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
