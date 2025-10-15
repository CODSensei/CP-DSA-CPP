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
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), res = 0, maxSum = 0;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < n; j++)  sum+= mat[i][j];
            maxSum = max(sum, maxSum);
        }
        
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < n; j++)  sum += mat[j][i];
            maxSum = max(sum, maxSum);
        }
        
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < n; j++)  sum += mat[i][j];
            res += (maxSum - sum);
        }
        
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
