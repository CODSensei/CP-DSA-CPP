#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

int fact(int n) {
   int fact = 1;
   for (int i = 1; i <= n; i++){
      fact = fact * i;
   }
   return fact;
}
    
int nCr(int n, int r){
   if (n < r) return 1;
  return fact(n)/(fact(r) * fact(n-r));
}

int main() {
   
   int n,r;
   cin >> n >> r;
   if (nCr(n,r) == 1) {cout << "n should be greater than r" << endl; return 0;}
   cout << nCr(n,r) << endl;

   return 0;
}