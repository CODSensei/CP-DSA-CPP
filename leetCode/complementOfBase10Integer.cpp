#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int bitwiseComplement(int n) {
        if (n == 0) return 1;
        int ans = 0, mul = 1, rem = 0;
        while(n) {
            rem = n % 2;
            rem = rem ^ 1;
            n /= 2;
            ans = rem * mul + ans;
            mul *= 2;
        }
        return ans;
    }

int main() {
   
   int n;
   cin >> n;
   cout << bitwiseComplement(n) << endl;

    return 0;
}