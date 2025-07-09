#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int solve(int A, int B, int C) {
    int n = (C + (A-1))%B;
    if (n==0) return B;
    return n;
    
}
    

int main() {
   
   int a,b,c;
   cin >> a >> b >> c;
   cout << solve(a,b,c) << endl;

   return 0;
}