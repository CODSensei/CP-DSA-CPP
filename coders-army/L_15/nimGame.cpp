#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

bool canWinNim(int n) {
        if (n%4!=0) return true;
        return false;
    }

int main() {
   
   int n;
   cin >> n;
   cout << canWinNim(n) << endl;

   return 0;
}