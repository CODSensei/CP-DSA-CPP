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
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i < n; i++){
            while(arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]){
                swap(arr[i], arr[arr[i] - 1]);
            }
        }
        
        for(int i = 1; i <= n; i++){
            if (i != arr[i - 1]) return i;
        }
        
        return n + 1;
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
