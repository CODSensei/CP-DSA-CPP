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
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        while(top <= bottom && left <= right){
            for(int i = left; i <= right; i++) ans.push_back(mat[top][i]);
            top++;
            for(int i = top; i <= bottom; i++) ans.push_back(mat[i][right]);
            right--;
            if (top <= bottom) {
                for(int i = right; i >= left; i--) ans.push_back(mat[bottom][i]);
                bottom--;
            }
            if (left <= right){
                for(int i = bottom; i >= top; i--) ans.push_back(mat[i][left]);
                left++;
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
