#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int solve(int A, int B, int C, int D) {
    if (( A == B && C == D) || (A == D && B == C) || (A == C & B == D) ) return 1;
    return 0;
}


int main() {
   
   int a,b,c,d;
   cin >> a >> b >> c >> d;
   cout << solve(a,b,c,d) << endl;

   return 0;
}