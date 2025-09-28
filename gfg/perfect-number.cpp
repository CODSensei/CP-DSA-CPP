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
    bool isPerfect(int n) {
        // code here
        vector<int> div;
        int sum = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if (n % i == 0){
                if (n/i == i) div.push_back(n/i);
                else {
                    div.push_back(i);
                    div.push_back(n/i);
                }
            }
        }
        for(int i = 0; i < div.size(); i++){
            if(div[i] != n) sum += div[i];
        }
        
        return sum == n;
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
