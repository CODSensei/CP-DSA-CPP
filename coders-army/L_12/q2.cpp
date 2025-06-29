#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int main() {
    
    int n,rem, ans = 0, mul = 1;
    cin >> n;

    while (n) {
        rem = n%2;
        n = n/2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }

    cout << ans << endl;

    return 0;
}