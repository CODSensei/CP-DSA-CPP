#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

void setMatrixZeroes(vector<vector<int>> &mat) {
    int n = mat.size(), m = mat[0].size();

    int c0 = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 0) {

                // mark i-th row
                mat[i][0] = 0;

                // mark j-th column
                if (j == 0)
                    c0 = 0;
                else
                    mat[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {

            // Check for col & row
            if (mat[i][0] == 0 || mat[0][j] == 0) {
                mat[i][j] = 0;
            }
        }
    }

    if (mat[0][0] == 0) {
        for (int j = 0; j < m; j++)
            mat[0][j] = 0;
    }
  
    if (c0 == 0) {
        for (int i = 0; i < n; i++)
            mat[i][0] = 0;
    }
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
