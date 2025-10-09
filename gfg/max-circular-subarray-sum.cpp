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
    int maxCircularSum(vector<int> &arr) {
        // code here
        int totalSum = 0;
        int currMaxSum = 0, currMinSum = 0;
        int maxSum = arr[0], minSum = arr[0];
        
        for(int i = 0; i < arr.size(); i++){
            currMaxSum = max(arr[i], arr[i] + currMaxSum);
            maxSum = max(maxSum , currMaxSum);
            
            currMinSum = min(arr[i], currMinSum + arr[i]);
            minSum = min(minSum, currMinSum);
            
            totalSum = totalSum + arr[i];
        }
        
        int normalSum = maxSum;
        int circularSum = totalSum - minSum;
        
        if (minSum == totalSum) return normalSum;
        
        return max(normalSum, circularSum);
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
