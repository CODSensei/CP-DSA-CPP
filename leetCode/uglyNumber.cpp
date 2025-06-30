#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back
    
 bool isUgly(int n) {
        if (n <= 0) return false;
        while(n%2 == 0) n/=2;
        while(n%3 == 0) n/=3;
        while(n%5 == 0) n/=5;
        return bool(n==1);
    }

int main() {
   
   int n;
   cin >> n;
   cout << isUgly(n) << endl;

    return 0;
}