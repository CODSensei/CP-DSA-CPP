#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

int Solution::solve(vector<int> &arr, int b) {
    sort(arr.begin(),arr.end());
    if (b < 0) b=b*-1;
    int start = 0, end = 1;
    while(end < arr.size()) {
        if (arr[end] - arr[start] == b) return 1;
        if (arr[end] - arr[start] < b) end++;
        else start++;
        
        if (start == end) end++;
    }
    
    return 0;
}

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
