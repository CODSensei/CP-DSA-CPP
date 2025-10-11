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
    vector<int> constructArr(vector<int>& arr) {
        // code here
        int n = arr.size();
        if (n == 1) return {1,arr[0] - 1};
        
        int rn = (1 + sqrt(1 + 8 * n)) / 2;
        vector<int> res(rn);
        res[0] = (arr[0] + arr[1] - arr[rn - 1]) / 2;
        for(int i = 1; i < rn; i++)
            res[i] = arr[i - 1] - res[0];
            
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
