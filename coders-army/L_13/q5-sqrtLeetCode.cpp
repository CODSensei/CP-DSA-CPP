#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
int mySqrt(int x) {
      for(int i = 1; i <= x; i++){
        if (i > INT_MAX / i) return i-1;
        if (i*i > x) return i-1;
        if (i*i == x) return i;
      }  
      return 0;
    }

int main() {
   
   int n;
   cin >> n;
   cout << mySqrt(n) << endl;

    return 0;
}