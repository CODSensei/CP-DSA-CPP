#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int trailingZeros(int n){
   int ans = 0;
   while(n){
      ans = ans + (n/5);
      n=n/5;
   }
   return ans;
}

int main() {
   
   int n;
   cin >> n;
   cout << trailingZeros(n) << endl;

   return 0;
}