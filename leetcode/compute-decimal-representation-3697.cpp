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
    vector<int> decimalRepresentation(int n) {
        vector<int> v,v1;
        int rem;
        long mul = 1;
        while(n){
            int rem = n%10;
            v.push_back(rem * mul);
            n /= 10;
            mul *= 10;
        }
        reverse(v.begin(),v.end());
        for(int i = 0; i < v.size(); i++){
            if (v[i] != 0){
                v1.push_back(v[i]);
            }
        }
        return v1;
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
