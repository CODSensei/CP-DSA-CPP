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
    vector<int> extractPoints(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        
        if (n == 0) return ans;
        ans.push_back(arr[0]);
        
        for(int i = 1; i < n - 1; i++){
            if (arr[i] > ans.back() && arr[i] > arr[i + 1]) ans.push_back(arr[i]);
            else if (ans.back() > arr[i] && arr[i] < arr[i + 1]) ans.push_back(arr[i]);
        }
        
        if (ans.back() != arr[n - 1]) ans.push_back(arr[n - 1]);
        
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
