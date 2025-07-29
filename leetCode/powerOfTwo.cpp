#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
bool isPowerOfTwo(int n) {
        if (n<1) return false;
        while(n!=1){
            if (n%2==1) return false;
            n/=2;
        }
        return true;
    // alternate way checks if it is even then checks if only power of 2 available or some other numbers too
     // if (n < 1) return false;
      //  while(n%2 == 0){
      //      if (n%2 == 0)
        //        n /= 2;
       // }
        // return n == 1 ? true : false;

    }

int main() {
   
   int n;
   cin >> n;
   cout << isPowerOfTwo(n) << endl;

    return 0;
}
