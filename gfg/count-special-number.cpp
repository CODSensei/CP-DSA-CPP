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
    int cntSpecialNum(vector<int>& arr) {
        // code here
        unordered_map<int, int> frequency;
        
        for(int x: arr) frequency[x]++;
        int count = 0;
        
        for(int x: arr) {
            frequency[x]--;
            bool flag = false;
            
            for(int i = 1; i * i <= x; i++){
                if (x % i == 0) {
                    if (frequency[i] > 0) {
                        flag = true;
                        break;
                    }
                    
                    int div = x / i;
                    if (div != i && frequency[div] > 0) {
                        flag = true;
                        break;
                    }
                }
            }
            
            if (flag) count++;
            
            frequency[x]++;
        }
        
        return count;
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
