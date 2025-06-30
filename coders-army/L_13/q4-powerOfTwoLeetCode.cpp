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
    }

int main() {
   
   int n;
   cin >> n;
   cout << isPowerOfTwo(n) << endl;

    return 0;
}