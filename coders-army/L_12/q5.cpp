#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int main() {
    
    int n,rem, dec = 0, mul = 1, ans = 0;
    cin >> n;

    while (n) {
        rem = n%10;
        n = n/10;
        dec = rem * mul + dec;
        mul = mul * 2;
    }

    cout << "dec = " << dec << endl;
    mul = 1;
    while (dec) {
        rem = dec % 8;
        dec = dec / 8;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << "ans = " << ans << endl;

    return 0;
}