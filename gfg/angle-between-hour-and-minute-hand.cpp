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
  
    double minimum(double x, double y) {
        return (x < y) ? x : y;
    }  
  
    double getAngle(string& s) {
        // code here
        int hour = stoi(s.substr(0,2));
        int minute = stoi(s.substr(3,2));
        
        hour = hour % 12;
        
        double hourAngle = 0.5 * (hour * 60 + minute);
        double minuteAngle = 6 * minute;
        
        double ans = fabs(hourAngle - minuteAngle);
        
        return minimum(360.0 - ans, ans);
        
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
